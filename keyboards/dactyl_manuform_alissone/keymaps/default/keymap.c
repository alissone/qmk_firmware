#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT(
          KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                        KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
          TG(6),  KC_A, KC_S, KC_D, KC_F, KC_G,                        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS,
       KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LALT(KC_F11),

          KC_LCTRL, KC_LGUI, KC_LALT, KC_ESC,                          KC_VOLU, KC_ENTER, KC_SPC, KC_BSPC,
                         KC_LSHIFT,                                    KC_VOLD, MO(5)
     ),


     [5] = LAYOUT(
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
     _______, _______, _______, _______, _______, _______,           _______, _______, KC_UP,   _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,           _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______, RESET,
     _______, _______, _______, _______, _______, OUT_BT,            OUT_USB, _______, KC_LBRC, KC_RBRC, _______, _______, _______,

          _______, _______, _______, _______,                        _______, _______, _______, KC_DEL,
                         _______,                                    _______, _______
     ),


     [6] = LAYOUT(
     _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
     _______, KC_1,    KC_2   , KC_3   , KC_4   , KC_5   ,           KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______, _______,
     _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,

          _______, _______, _______, _______,                        _______, _______, _______, _______,
                         _______,                                        _______, _______
     ),
};
