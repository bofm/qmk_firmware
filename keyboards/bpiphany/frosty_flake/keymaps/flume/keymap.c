#include QMK_KEYBOARD_H

enum QFR_layers {
  _QWERTY,
  _LOWER,
};

enum QFR_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
};

enum custom_macros {
  R_PIPE,
  R_POINT
};

 


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT_tkl(\
       KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, KC_PAUS, \
       KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
       KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
       MO (_LOWER),KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,          KC_ENT, \
       KC_LSFT,KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,            KC_UP, \
       KC_LCTL,KC_LGUI,KC_LALT,                KC_SPC,                                 KC_LALT,    KC_RGUI , KC_APP,  KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
       ),



[_LOWER] = LAYOUT_tkl(\
      RESET,    _______,    _______,   _______, _______,  KC_MPLY,   KC_MSTP,   KC_MPRV,   KC_MNXT,  _______, KC_MUTE, KC_VOLD, KC_VOLU,           _______, _______,_______, \
      KC_TILD,  KC_EXLM,    KC_AT,     KC_HASH,  KC_DLR,  KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,  KC_LBRC, KC_RBRC, KC_UNDS, KC_PLUS, KC_BSPC,  _______,_______,_______, \
      KC_TAB,   KC_PGUP,    KC_HOME,   KC_UP,    KC_END,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_PIPE,  _______,_______,_______, \
      KC_CAPS,  KC_PGDN,    KC_LEFT,   KC_DOWN,  KC_RGHT, XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, _______,          _______,                           \
      _______,XXXXXXX,_______,_______,      KC_LCBR,  KC_LBRC, KC_GRV,    KC_PIPE,   KC_RBRC,   KC_RCBR,  _______, _______,                   _______,          _______,         \
      _______,  _______,    _______,             _______,                       KC_RALT,   _______,  _______, _______,                            _______,_______,_______  \
      )
};


