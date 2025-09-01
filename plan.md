📋 VIA 지원 펌웨어 생성 전체 계획

🎯 목표

1. VIA 앱에서 Iris SE 키보드 인식 가능하게 만들기
2. MT(MOD_LGUI,KC_ENT) 타이밍 문제 해결 (cmd+w 즉시 동작)
3. Alt+Cmd 조합 입력 개선

📁 생성할 파일 구조

keyboards/keebio/iris/keymaps/via/
├── keymap.c # 키맵 정의
├── config.h # 타이밍 최적화 설정
└── rules.mk # VIA 활성화

📝 각 파일 내용

1. keymap.c - 당신의 실제 키맵 반영

```c
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 - Base (당신의 현재 설정과 동일)
    [0] = LAYOUT(
        QK_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,
KC_0,    KC_TILD,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,
KC_P,    KC_BSLS,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,
KC_SCLN, KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_NO,    KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,
KC_SLSH, KC_RSFT,
                                            KC_LALT, MO(1),   MT(MOD_LGUI,KC_ENT), KC_SPC,  LT(2,KC_BSPC), KC_RALT
    ),

    // Layer 1 - Lower (당신의 현재 설정)
    [1] = LAYOUT(
        KC_HOME, KC_EXLM,  KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,
KC_RPRN, KC_PGUP,
        KC_END,  _______, _______, _______, QK_BOOT, _______,                    KC_MINS, KC_PLUS, _______, KC_LBRC,
KC_RBRC, KC_PGDN,
        _______, KC_BRIU, KC_VOLU, _______, _______, _______,                    KC_UNDS, KC_EQL,  _______, KC_LCBR,
KC_RCBR, _______,
        _______, KC_BRID, KC_VOLD, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
_______, _______,
                                            _______, _______, KC_DEL,           KC_DEL,  KC_P0,   _______
    ),

    // Layer 2 - Raise (당신의 현재 설정)
    [2] = LAYOUT(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,
KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
_______, _______,
        _______, _______, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
_______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______,
                                            _______, _______, _______,          _______, _______, _______
    ),

    // Layer 3 - VIA 추가 레이어용
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
_______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
_______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
_______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______,
                                            _______, _______, _______,          _______, _______, _______
    )
};
```

// 타이밍 문제 해결 함수들

```c
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            return 80;  // 80ms로 빠른 반응
        case LT(2, KC_BSPC):
            return 100;
        default:
            return TAPPING_TERM;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            return true;  // cmd+w 같은 조합 즉시 인식
        default:
            return false;
    }
}
```

2. config.h - 타이밍 최적화

```c
#pragma once

// Mod-Tap 타이밍 개선
#define TAPPING_TERM 100                // 기본 200ms → 100ms
#define TAPPING_TERM_PER_KEY            // 키별 개별 설정
#define HOLD_ON_OTHER_KEY_PRESS         // 다른 키와 함께 = 즉시 Hold
#define RETRO_TAPPING                   // 놓친 탭도 인식

// Modifier 조합 개선
#define PERMISSIVE_HOLD                 // Alt+Cmd 개선
#define QUICK_TAP_TERM 80              // 빠른 연속 입력

// VIA 레이어 수
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// 디바운스
#define DEBOUNCE 5

3. rules.mk - VIA 활성화 (핵심!)

VIA_ENABLE = yes    # VIA 지원 필수
LTO_ENABLE = yes    # 펌웨어 크기 최적화
```

🔧 실행 명령어

컴파일

qmk compile -kb keebio/iris/rev8 -km via

플래싱

# 1. 키보드의 BOOTSEL 버튼을 누른 상태로 USB 연결

# 2. 다음 명령 실행:

qmk flash -kb keebio/iris/rev8 -km via

✅ 예상 결과

1. VIA 앱 인식: 플래싱 후 VIA 앱이 키보드를 자동으로 인식
2. 타이밍 개선: MT(MOD_LGUI,KC_ENT)로 cmd+w 같은 조합이 즉시 동작
3. Modifier 조합: Alt+Cmd 동시 입력이 더 잘 인식됨
4. 동적 키맵: VIA 앱에서 실시간으로 키 변경 가능

⚠️ 주의사항

- 키맵 디렉토리 이름은 반드시 via여야 함
- VIA_ENABLE = yes가 rules.mk에 반드시 포함되어야 함
- Rev8이 아닌 다른 버전이면 명령어 수정 필요
