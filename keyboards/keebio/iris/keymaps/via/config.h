#pragma once

// ===== VIA 지원 설정 =====
#define DYNAMIC_KEYMAP_LAYER_COUNT 4        // VIA에서 사용할 수 있는 레이어 수

// ===== Mod-Tap 타이밍 최적화 =====
#define TAPPING_TERM 175                    // 기본 200ms에서 175ms로 단축
#define TAPPING_TERM_PER_KEY                // 키별 개별 설정 활성화
#define PERMISSIVE_HOLD                     // 다른 키와 함께 누르면 hold로 인식
#define HOLD_ON_OTHER_KEY_PRESS             // 다른 키 누르면 즉시 hold 처리
#define QUICK_TAP_TERM 120                  // 빠른 연속 탭 지원

// ===== 타이밍 조정 =====
#define DEBOUNCE 3                          // 디바운스를 5ms에서 3ms로 감소
#define USB_SUSPEND_WAKEUP_DELAY 0          // USB 지연 최소화

// ===== Mod-Tap 동작 조정 =====
// #define RETRO_TAPPING                    // 비활성화: Shift+Layer+Arrow 조합에서 뒤늦은 BSPC tap 방지 (진단 중)

// ===== 디버깅 설정 (필요시 주석 해제) =====
// #define DEBUG_MATRIX_SCAN_RATE           // 매트릭스 스캔 레이트 확인
// #define DEBUG_KEYBOARD                   // 키보드 이벤트 디버깅
// #define DEBUG_ACTION                     // 액션 디버깅
