

#include QMK_KEYBOARD_H
#include "quantum.h"

// clang-format off
enum layers{
  LAYER_0,
  LAYER_1,
  LAYER_2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_0] = LAYOUT_109_ansi(
        KC_ESC,    KC_F1, KC_F2, KC_F3, KC_F4,    KC_F5, KC_F6, KC_F7, KC_F8,    KC_F9, KC_F10, KC_F11, KC_F12,    KC_MUTE,   _______, _______, _______,   _______, _______, _______, KC_CALC,
        KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,  KC_0,   KC_MINS,  KC_EQL,  KC_BSPC,    KC_INS, KC_HOME, KC_PGUP,   KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END, KC_PGDN,     KC_P7,   KC_P8,   KC_P9, KC_PPLS,
        KC_CAPS,     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,  KC_SCLN,  KC_QUOT,      KC_ENT,                                  KC_P4,   KC_P5,   KC_P6,
        KC_LSFT,       KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT,              KC_UP,              KC_P1,   KC_P2,   KC_P3,  KC_ENT,
        KC_LCTL, KC_LWIN, KC_LALT,                            KC_SPC,               KC_RALT, MO(LAYER_2), KC_PSCR, KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT,     KC_P0,   KC_PDOT        ),
    [LAYER_1] = LAYOUT_109_ansi(
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, EE_CLR, QK_RBT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, DB_TOGG, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, QK_MAKE, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, MO(LAYER_2), _______, _______, _______, _______, _______, _______,          _______        ),
    [LAYER_2] = LAYOUT_109_ansi(
            _______,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,      KC_F22,  KC_F23,  KC_F24, RGB_TOG, BT_HST1, BT_HST2, BT_HST3,      BT_HST4,      BT_HST5,      BT_HST6, KC_CALC,
        DF(LAYER_0), _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,      _______,      _______,      _______, RGB_VAD,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,      _______,  _______,  _______, RGB_VAI,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DF(LAYER_1), _______,          _______,                                 _______,  _______,  _______,
            _______,          _______, _______, _______, _______, _______,   NK_ON, _______, _______,     _______, _______,          _______,          KC_MPLY,               _______,  _______,  _______, _______,
            _______, _______, _______,                            _______,                                _______, _______, _______, _______, KC_MPRV, _______, KC_MNXT,      _______,                 KC_COMM             ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [LAYER_0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_2] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
};
#endif // ENCODER_MAP_ENABLE

//*  ###############   RGB CODE   #####################  *//
//*  ##################################################  *//


enum custom_effects {
    EFFECT_STATIC_COLOR,
    EFFECT_REACTIVE_SPLASH,
};

// Sets custom colors for different sections of the keyboard
void set_custom_colors(void) {
    for (int i = 0; i < 41; i++) {
        rgb_matrix_set_color(i, 255, 0, 255); // Purple
    }
    for (int i = 41; i < 78; i++) {
        rgb_matrix_set_color(i, 255, 0, 0); // Red
    }
    for (int i = 78; i < 108; i++) {
        rgb_matrix_set_color(i, 255, 165, 0); // Orange
    }
}

// Reactive splash effect based on key hits
bool custom_effect_reactive_splash(effect_params_t* params) {
    // Turn off all LEDs initially
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        rgb_matrix_set_color(i, 0, 0, 0); // Turn off LED
    }

    // Example: Light up specific keys in white
    uint8_t white_keys[] = {1, 2, 3, 4, 5}; // Adjust the key indices as needed
    for (uint8_t i = 0; i < sizeof(white_keys) / sizeof(white_keys[0]); i++) {
        rgb_matrix_set_color(white_keys[i], 255, 255, 255); // White
    }

    return true;
}

// Applies initial settings and updates during keyboard post-initialization
void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom(); // Enable RGB Matrix without saving to EEPROM
    rgb_matrix_mode_noeeprom(EFFECT_STATIC_COLOR); // Set to static color mode initially
    set_custom_colors(); // Apply initial custom colors
}

// Matrix scanning to manage dynamic effects
void matrix_scan_user(void) {
    static uint16_t last_time = 0;
    uint16_t current_time = timer_read();
    if (current_time - last_time > 100) { // Update every 100ms
        last_time = current_time;
        if (rgb_matrix_config.mode == EFFECT_STATIC_COLOR) {
            // No need to repeatedly set colors in EFFECT_STATIC_COLOR mode
        }
    }
}

// Handler for RGB matrix effects that require advanced processing
bool rgb_matrix_indicators_advanced_user(uint8_t min, uint8_t max) {
    if (rgb_matrix_config.mode == EFFECT_REACTIVE_SPLASH) {
        effect_params_t params = {0}; // Initialize the params structure
        return custom_effect_reactive_splash(&params);
    }
    return false;
}