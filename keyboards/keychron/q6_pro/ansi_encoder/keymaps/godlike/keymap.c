

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  LAYER_0,
  LAYER_1,
  LAYER_2,
  LAYER_3,
  LAYER_4,
  LAYER_5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_0] = LAYOUT_109_ansi(
        KC_ESC,    KC_F1, KC_F2, KC_F3, KC_F4,    KC_F5, KC_F6, KC_F7, KC_F8,    KC_F9, KC_F10, KC_F11, KC_F12,    KC_MUTE,   _______, _______, _______,   _______, _______, _______, KC_CALC,
        KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,  KC_0,   KC_MINS,  KC_EQL,  KC_BSPC,    KC_INS, KC_HOME, KC_PGUP,   KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END, KC_PGDN,     KC_P7,   KC_P8,   KC_P9, KC_PPLS,
        KC_CAPS,     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,  KC_SCLN,  KC_QUOT,      KC_ENT,                                  KC_P4,   KC_P5,   KC_P6,
        KC_LSFT,       KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT,              KC_UP,              KC_P1,   KC_P2,   KC_P3,  KC_ENT,
        KC_LCTL, KC_LWIN, KC_LALT,                            KC_SPC,               KC_RALT, MO(LAYER_5), KC_PSCR, KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT,     KC_P0,   KC_PDOT        ),
    [LAYER_1] = LAYOUT_109_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______,          _______        ),
    [LAYER_2] = LAYOUT_109_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______,          _______        ),
    [LAYER_3] = LAYOUT_109_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______,          _______        ),    
    [LAYER_4] = LAYOUT_109_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______,          _______        ),
    [LAYER_5] = LAYOUT_109_ansi(
        _______,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24, RGB_TOG, _______, _______, _______,      _______,      _______,      _______, _______,
        BAT_LVL, BT_HST1, BT_HST2, BT_HST3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,      _______,      _______, RGB_VAD,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,      _______,      _______, RGB_VAI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                             DF(LAYER_3),  DF(LAYER_4),      _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          KC_MPLY,           DF(LAYER_0),  DF(LAYER_1),  DF(LAYER_2), _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, KC_MPRV, _______, KC_MNXT, _______,           KC_COMM             ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [LAYER_0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_4] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_5] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
};
#endif // ENCODER_MAP_ENABLE
