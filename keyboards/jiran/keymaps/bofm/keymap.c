#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _SSS 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  SSS,
  ADJUST,
};

////////// custom aliases and keycodes //////////////

#define KC_CMD KC_LGUI

#define KC_RCMD KC_RGUI
#define KC_ALT_L LALT(KC_LEFT)
#define KC_ALT_R LALT(KC_RGHT)
#define KC_LALSPC LALT_T(KC_SPC)
#define KC_RALBSP RALT_T(KC_BSPC)
#define KC_ALDEL RALT_T(KC_DEL)
#define KC_LSHSPC LSFT_T(KC_SPC)
#define KC_LSEQ LSFT_T(KC_EQL)
#define KC_RSHBSP RSFT_T(KC_BSPC)
#define KC_RSHDEL RSFT_T(KC_DEL)
#define KC_RALDEL RALT_T(KC_DEL)
#define KC_LOESC LT(_LOWER, KC_ESC)
#define KC_LOENT LT(_LOWER, KC_ENT)
#define KC_LOF LT(_LOWER, KC_F)
#define KC_RCTQT RCTL_T(KC_QUOT)
#define KC_RSHQT RSFT_T(KC_QUOT)
#define KC_SSSC LT(_SSS, KC_C)
#define KC_CMD_L LGUI(KC_LEFT)
#define KC_CMD_R LGUI(KC_RIGHT)
#define KC_CMDSP LGUI(KC_SPC)
#define CMD_SP_T LGUI_T(KC_SPC)
#define KC_1PASS LGUI(LALT(KC_BSLS))
#define KC_LCAG LCTL(LALT(KC_LGUI))
#define KC_LPRN LSFT(KC_9)
#define KC_RPRN LSFT(KC_0)
#define KC_LCBR LSFT(KC_LBRC)
#define KC_RCBR LSFT(KC_RBRC)
#define KC_PLUS LSFT(KC_EQL)
#define KC_MULT LSFT(KC_8)
#define KC_RAIDEL LT(_RAISE, KC_DEL)

////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_LCAG, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSPO, KC_A,    KC_S,    KC_D,    KC_LOF,  KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSHQT,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  KC_Z,    KC_X,   KC_SSSC,  KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┼────────┴────────┴────────┴────────┘
                                          KC_LALT,  CMD_SP_T,KC_LOESC,     KC_LOENT,KC_RALBSP,KC_RAIDEL
                                  //     └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,   KC_F1,   KC_F2,    KC_F3,   KC_F4,  KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       KC_ESC, KC_NLCK, _______, _______, KC_LBRC, KC_RBRC,  KC_EQL,         KC_VOLU, KC_ALT_L, KC_UP, KC_ALT_R,KC_1PASS, KC_LBRC, KC_RCMD,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSFT, _______, _______, KC_LPRN, KC_RPRN, KC_PLUS,         KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  _______,_______, KC_LCBR, KC_RCBR, _______,         KC_VOLD, KC_CMD_L,XXXXXXX, KC_CMD_R, KC_BSLS, KC_RCTL,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          KC_LALT,  KC_SPC, KC_ESC,         KC_CMDSP, KC_RALDEL, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_CMD,  KC_CAPS, KC_SLSH,  KC_7,    KC_8,    KC_9,   KC_MINS,         KC_VOLU, KC_U,    KC_UP,    KC_O,    KC_P,    KC_LBRC, KC_RCMD,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSEQ, KC_MULT,  KC_4,    KC_5,    KC_6,   KC_PLUS,           KC_MUTE, KC_LEFT, KC_DOWN,  KC_RGHT, KC_SCLN, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  KC_0,    KC_1,    KC_2,    KC_3,   KC_DOT,           KC_VOLD, KC_M,    XXXXXXX, KC_DOT,  KC_BSLS, KC_RCTL,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘────────┘
                                          ADJUST,  KC_CMD,  KC_SPC,          KC_ENT,  KC_BSPC, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_SSS] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, KC_CMDSP,_______,         _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘
                                          _______,  _______, _______,        _______, _______, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       RESET,  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘
                                          _______,  KC_CMD,  KC_SPC,          KC_ENT, KC_BSPC, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
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
    case SSS:
      if (record->event.pressed) {
        layer_on(_SSS);
      } else {
        layer_off(_SSS);
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
