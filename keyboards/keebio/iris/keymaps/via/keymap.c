#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 - Base (당신의 현재 설정과 동일)
    [0] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           QK_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_DEL,           KC_LGUI, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            KC_LALT,  MO(1),   MT(MOD_LGUI,KC_ENT),       KC_SPC,  LT(2,KC_BSPC), MT(MOD_RALT, KC_F18)
                                        //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Layer 1 - Lower (당신의 현재 설정)
    [1] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_HOME, KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR, KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_END,  _______, _______, _______, QK_BOOT, _______,                            KC_UNDS,  KC_PLUS, _______, KC_LCBR, KC_RCBR, KC_PGDN,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, KC_BRIU, KC_VOLU, _______, _______, _______,                            KC_MINS, KC_EQL, _______, KC_LBRC, KC_RBRC, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           _______, KC_BRID, KC_VOLD, _______, _______, _______, _______,          _______, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, _______, _______,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            _______, _______,  KC_DEL,                     KC_DEL,   KC_P0,  _______
                                        //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Layer 2 - Raise (당신의 현재 설정)
    [2] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, _______, _______, _______, _______, _______,                            KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            _______, _______, _______,                    _______, _______, _______
                                        //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Layer 3 - VIA가 관리할 추가 레이어
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______,          _______, _______, _______
    )
};

// ===== Per-Key Tapping Term 설정 =====
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            return 150;  // Enter/Cmd는 더 빠르게
        case LT(2, KC_BSPC):
            return 180;  // Layer tap은 약간 더 여유있게
        case MT(MOD_RALT, KC_F18):
            return 160;  // Tab/F18도 빠르게
        default:
            return TAPPING_TERM;
    }
}

// ===== Quick Tap Term 설정 =====
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            return QUICK_TAP_TERM;
        case MT(MOD_RALT, KC_F18):
            return QUICK_TAP_TERM;
        default:
            return 0;  // 다른 키는 quick tap 비활성화
    }
}

// ===== Alt+화살표 조합 우선순위 해결 =====
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Alt 키와 Shift 키 상태 추적
    static bool alt_held = false;
    static bool shift_held = false;
    
    switch (keycode) {
        case KC_LALT:
            if (record->event.pressed) {
                alt_held = true;
                register_code(KC_LALT);
                return false;  // QMK 기본 처리 스킵하여 더 확실한 Alt 등록
            } else {
                alt_held = false;
                unregister_code(KC_LALT);
                return false;
            }
            break;
            
        case KC_LSFT:
            // 왼쪽 Shift만 추적 (왼쪽 Alt와 함께 사용되므로)
            if (record->event.pressed) {
                shift_held = true;
            } else {
                shift_held = false;
            }
            // 왼쪽 Shift는 정상 처리하되 상태만 추적
            return true;
            break;
            
        case KC_TAB:
            // Alt + Shift + Tab 조합 가로채기 (clear_keyboard 사용 안 함)
            if (alt_held && shift_held) {
                if (record->event.pressed) {
                    // 직접 조합 전송 (기존 modifier 상태 보존)
                    register_code(KC_LALT);
                    register_code(KC_LSFT);
                    register_code(KC_TAB);
                } else {
                    unregister_code(KC_TAB);
                    // Shift와 Alt 상태는 물리적 키에 따라 유지
                }
                return false;  // 앱의 Shift+Tab 가로채기 방지
            }
            // Alt 없이 Tab만 눌렀을 때는 정상 처리
            break;
            
        case KC_Z:
            // Alt + Shift + Z 조합 처리
            if (alt_held && shift_held) {
                if (record->event.pressed) {
                    register_code(KC_LALT);
                    register_code(KC_LSFT);
                    register_code(KC_Z);
                } else {
                    unregister_code(KC_Z);
                }
                return false;
            }
            break;
            
        // 화살표 키들 - Alt가 눌려있으면 GUI 키 차단하고 Alt+Arrow만 전송
        case KC_UP:
        case KC_DOWN:
        case KC_LEFT:
        case KC_RIGHT:
            if (alt_held) {
                if (record->event.pressed) {
                    // GUI 키가 눌려있는지 확인 (MT 키 홀드 포함)
                    bool gui_was_held = get_mods() & MOD_BIT(KC_LGUI);
                    
                    // GUI 키를 임시로 해제하여 macOS의 Cmd+Arrow 우선순위 차단
                    if (gui_was_held) {
                        unregister_code(KC_LGUI);
                    }
                    
                    // Alt + Arrow 조합만 전송
                    register_code(KC_LALT);
                    register_code(keycode);
                    
                    // GUI 키를 다시 복원 (Cmd+Tab 등 다른 조합을 위해)
                    if (gui_was_held) {
                        register_code(KC_LGUI);
                    }
                } else {
                    unregister_code(keycode);
                    // modifier 상태는 물리적 키에 따라 유지
                }
                return false;  // macOS의 Cmd+화살표 우선순위 완전 차단
            }
            break;
    }
    
    return true;  // 다른 키들은 정상 처리
}

// ===== 레이어 변경 시 modifier 상태 리셋 =====
layer_state_t layer_state_set_user(layer_state_t state) {
    // clear_keyboard() 제거: MT/LT 키와 함께 사용할 때 modifier가 사라지는 문제 방지
    // stuck modifier는 다른 방법으로 해결 (process_record_user에서 개별 처리)
    return state;
}
