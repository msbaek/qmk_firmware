#pragma once

// ===== VIA 지원 설정 =====
#define DYNAMIC_KEYMAP_LAYER_COUNT 4        // VIA에서 사용할 수 있는 레이어 수

// ===== Modifier 조합 개선 =====
// #define NKRO_DEFAULT_ON true                // 부팅 시 NKRO 자동 활성화
#define USB_POLLING_INTERVAL_MS 1           // USB 폴링 간격을 1ms로 설정 (더 빠른 반응)

// ===== Mod-Tap 타이밍 최적화 =====
#define TAPPING_TERM 175                    // 기본 200ms에서 175ms로 단축
#define TAPPING_TERM_PER_KEY                // 키별 개별 설정 활성화
#define PERMISSIVE_HOLD                     // 다른 키와 함께 누르면 hold로 인식
#define HOLD_ON_OTHER_KEY_PRESS             // 다른 키 누르면 즉시 hold 처리
#define QUICK_TAP_TERM 120                  // 빠른 연속 탭 지원

// ===== macOS 특화 설정 =====
// #define GRAVE_ESC_ALT_OVERRIDE              // Alt 키 우선순위 설정
#define DEBOUNCE 3                          // 디바운스를 5ms에서 3ms로 감소

// ===== 타이밍 조정 =====
#define USB_SUSPEND_WAKEUP_DELAY 0          // USB 지연 최소화
// NKRO는 이미 NKRO_DEFAULT_ON true로 활성화됨

// ===== KC_LALT 문제 해결을 위한 추가 설정 =====
// #define TAPPING_FORCE_HOLD               // Cmd+Click 문제 원인으로 주석 처리
// #define IGNORE_MOD_TAP_INTERRUPT         // QMK 최신 버전에서는 기본 동작이므로 제거
// #define RETRO_TAPPING                    // 비활성화: Shift+Layer+Arrow 조합에서 뒤늦은 BSPC tap 방지 (진단 중)
#define BILATERAL_COMBINATIONS              // 양쪽 modifier 키 조합 개선

// ===== One Shot Modifier 설정 =====
// #define ONESHOT_TIMEOUT 3000            // One Shot Modifier 타임아웃 (3초)
// #define ONESHOT_TAP_TOGGLE 2            // 두 번 탭하면 토글

// ===== 디버깅 설정 (필요시 주석 해제) =====
// #define DEBUG_MATRIX_SCAN_RATE       // 매트릭스 스캔 레이트 확인
// #define DEBUG_KEYBOARD               // 키보드 이벤트 디버깅
// #define DEBUG_ACTION                 // 액션 디버깅
