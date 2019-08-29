#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

////////// custom aliases and keycodes //////////////

#define KC_CMD KC_LGUI

#define KC_RCMD KC_RGUI
#define KC_ALT_L LALT(KC_LEFT)
#define KC_ALT_R LALT(KC_RGHT)

#define KC_LSHSPC LSFT_T(KC_SPC)
#define KC_RSHBSP LSFT_T(KC_BSPC)
#define KC_RSDEL LSFT_T(KC_DEL)
#define KC_LOESC LT(_LOWER, KC_ESC)
#define KC_LOENT LT(_LOWER, KC_ENT)

////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_CMD,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ALGR,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┼────────┴────────┴────────┴────────┘
                                          KC_CMD, KC_LSHSPC,KC_LOESC,                           KC_LOENT,KC_RSHBSP, RAISE
                                  //     └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_HOME,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_CMD,  KC_NLCK, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PGUP,                            KC_VOLU, KC_ALT_L, KC_I,   KC_ALT_R, KC_P,    KC_LBRC, KC_RCMD,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LCTL, KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_PGDN,                            KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_SCLN, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LALT, KC_Z,    KC_P0,   KC_PDOT, KC_PPLS, KC_END,                             KC_VOLD, KC_M,    KC_DOWN, KC_DOT,  KC_BSLS, KC_ALGR,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          _______, KC_LSHSPC,KC_ESC,                             KC_ENT,  KC_RSDEL, _______
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_CMD,  KC_CAPS, KC_Q,    KC_W,    KC_E,    KC_F11,  KC_F12,                             KC_VOLU, KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RCMD,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_SCLN, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_VOLD, KC_M,    KC_DOWN, KC_DOT,  KC_BSLS, KC_ALGR,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┘────────┘
                                          ADJUST,  KC_SPC,  KC_ESC,                             KC_ENT,  KC_BSPC, _______
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       RESET,  _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┘
                                          _______,  KC_SPC,  KC_ESC,                             KC_ENT, KC_BSPC, _______
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
