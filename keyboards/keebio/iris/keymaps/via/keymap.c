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
                                            KC_LALT,  MO(1),   MT(MOD_LGUI,KC_ENT),       KC_SPC,  LT(2,KC_BSPC), KC_RALT
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
                                            _______, _______,  KC_DEL,                     KC_DEL,   KC_F18,  KC_P0
                                        //└────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    // Layer 2 - Raise (당신의 현재 설정)
    [2] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        //  왼손 6칸 = TAB, Q, W, E, R, T 순서. 맨 끝(T자리) = cmd+opt+t (Ghostty quick terminal)
           _______, _______, _______, _______, _______, LGUI(LALT(KC_T)),                    _______, _______, _______, _______, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           _______, KC_HOME, KC_PGUP, _______, _______, _______,                            KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, _______, _______,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           _______, KC_END, KC_PGDN, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            _______, _______, KC_DEL,                    KC_DEL, _______, _______
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

// ===== Combos =====
const uint16_t PROGMEM ji_combo[] = {KC_J, KC_I, COMBO_END};
combo_t key_combos[] = {
    COMBO(ji_combo, LALT(KC_ENT)),  // J + I 동시 누름 → Opt(Alt) + Enter
};

// ===== Per-Key Tapping Term 설정 =====
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            return 150;  // Enter/Cmd는 더 빠르게
        case LT(2, KC_BSPC):
            return 180;  // Layer tap은 약간 더 여유있게
        default:
            return TAPPING_TERM;
    }
}

// NOTE: get_quick_tap_term / get_hold_on_other_key_press callbacks were removed.
// Their *_PER_KEY gate macros aren't defined, so QMK never called them (dead code).
// The global QUICK_TAP_TERM(120) / HOLD_ON_OTHER_KEY_PRESS in config.h already
// apply to every key, so removing these does not change behavior.

// ===== Alt+화살표 조합 우선순위 해결 =====
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Modifier 키 상태 추적
    static bool alt_held = false;
    static bool shift_held = false;
    static bool cmd_held = false;  // 물리적 Cmd 키 상태 추적
    static uint32_t cmd_press_time = 0;

    switch (keycode) {
        case MT(MOD_LGUI, KC_ENT):
            // Cmd/Enter 키 특별 처리
            if (record->event.pressed) {
                cmd_press_time = record->event.time;
                register_code(KC_LGUI);
                return false;  // QMK의 기본 MT 처리 건너뛰기
            } else {
                unregister_code(KC_LGUI);

                // 짧게 눌렀고 마우스 클릭이 없었다면 Enter 처리
                // 하지만 Cmd가 활성화된 상태에서는 Enter를 보내지 않음
                uint32_t hold_time = record->event.time - cmd_press_time;
                if (hold_time < TAPPING_TERM && !(get_mods() & MOD_MASK_GUI)) {
                    tap_code(KC_ENT);
                }
                return false;
            }
            break;

        case KC_LGUI:
            // Left Command 키 처리
            if (record->event.pressed) {
                cmd_held = true;
                // 중복 등록 방지
                if (!(get_mods() & MOD_BIT(KC_LGUI))) {
                    register_code(KC_LGUI);
                }
                return false;
            } else {
                // Alt+Cmd 조합 중에는 절대 Cmd를 해제하지 않음
                if (alt_held) {
                    // 물리적으로는 해제되었지만 논리적으로는 유지
                    cmd_held = false;
                    return false;  // Cmd 해제 차단
                } else {
                    cmd_held = false;
                    unregister_code(KC_LGUI);
                    return false;
                }
            }
            break;

        case KC_LALT:
            if (record->event.pressed) {
                alt_held = true;
                register_code(KC_LALT);
                return false;  // QMK 기본 처리 스킵하여 더 확실한 Alt 등록
            } else {
                alt_held = false;
                // Alt 해제 시 지연된 Cmd도 함께 해제
                unregister_code(KC_LALT);
                // Cmd가 물리적으로 해제되었고 Alt도 해제되면 Cmd도 해제
                if ((get_mods() & MOD_BIT(KC_LGUI)) && !cmd_held) {
                    unregister_code(KC_LGUI);
                }
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

        // 화살표 키들 - Alt+Cmd 조합 처리
        case KC_UP:
        case KC_DOWN:
        case KC_LEFT:
        case KC_RIGHT:
            if (alt_held) {
                if (record->event.pressed) {
                    // Alt+Cmd+Arrow 조합: 두 modifier 모두 확실히 적용
                    register_code(KC_LALT);
                    if (get_mods() & MOD_BIT(KC_LGUI)) {
                        // Cmd도 같이 눌려있으면 Alt+Cmd+Arrow 조합
                        register_code(KC_LGUI);
                    }
                    register_code(keycode);
                } else {
                    unregister_code(keycode);
                    // modifier들은 물리적 키 상태에 따라 유지
                }
                return false;  // macOS 기본 동작 차단
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
