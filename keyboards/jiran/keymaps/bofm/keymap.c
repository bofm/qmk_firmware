// http://www.keyboard-layout-editor.com/#/gists/6ba1476134c42e069a3c009b3fe0900b

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _SSS 4
#define _TABS 5
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  SSS,
  TABS,
  CMD_TAB,
  CMD_SHTAB,
  CT_TAB,
  CT_SHTAB,
  LANG_ALT_T,
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
#define LTTABS LT(_TABS, KC_TAB)
#define SFT_TAB LSFT(KC_TAB)
#define PIPE LSFT(KC_BSLS)
#define GOTODEF LCMD(KC_BSLS)

////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_LCAG,  LTTABS,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSPO, KC_A,    KC_S,    KC_D,    KC_LOF,   KC_G,            KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RSHQT,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  KC_Z,    KC_X,   KC_SSSC,  KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┼────────┴────────┴────────┴────────┘
                                        LANG_ALT_T,CMD_SP_T,KC_LOESC,       KC_LOENT,KC_RALBSP,KC_RAIDEL
                                  //     └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,   KC_F1,   KC_F2,    KC_F3,   KC_F4,  KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       KC_ESC, KC_NLCK, _______, _______, KC_LBRC, KC_RBRC, KC_PLUS,         KC_PGUP, KC_ALT_L, KC_UP, KC_ALT_R,KC_1PASS, KC_LBRC, KC_RCMD,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSFT, _______, _______, KC_LPRN, KC_RPRN,  KC_EQL,         KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT, GOTODEF, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  _______,_______, KC_LCBR, KC_RCBR,   PIPE,          KC_MUTE, KC_CMD_L,KC_MINS, KC_CMD_R, KC_BSLS, KC_RCTL,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          KC_LALT, CMD_SP_T,  KC_ESC,         KC_ENT, KC_RALDEL, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_CMD,  KC_CAPS, KC_SLSH,  KC_7,    KC_8,    KC_9,   KC_PLUS,         KC_VOLU, KC_U,    KC_UP,    KC_O,    KC_P,    KC_LBRC, KC_F12,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSEQ, KC_MULT,  KC_4,    KC_5,    KC_6,   KC_MINS,         KC_MUTE, KC_LEFT, KC_DOWN,  KC_RGHT, KC_SCLN, KC_RCTL,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL,  KC_0,    KC_1,    KC_2,    KC_3,   KC_DOT,          KC_VOLD, KC_M,    XXXXXXX, KC_DOT,  KC_BSLS, KC_RCTL,
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

  [_TABS] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,         _______, CMD_TAB,CMD_SHTAB, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, _______, _______,         _______, CT_TAB,  CT_SHTAB, _______, _______, _______,
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


static uint16_t _lang_alt_t_timer;

static bool _lang_alt_t_pressed = false;
static uint16_t _prev_keycode = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  if (_lang_alt_t_pressed && _prev_keycode == LANG_ALT_T && keycode != LANG_ALT_T) {
    register_mods(MOD_BIT(KC_LALT));
  }

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
    case CMD_TAB:
      if (record->event.pressed) {
        if (!(get_mods() & MOD_BIT(KC_LCMD))) {
          register_mods(MOD_BIT(KC_LCMD));
        }
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      return false;
      break;
    case CMD_SHTAB:
      if (record->event.pressed) {
        if (!(get_mods() & MOD_BIT(KC_LCMD))) {
          register_mods(MOD_BIT(KC_LCMD));
        }
        register_mods(MOD_BIT(KC_LSFT));
        register_code(KC_TAB);
      } else {
        unregister_mods(MOD_BIT(KC_LSFT));
        unregister_code(KC_TAB);
      }
      return false;
      break;
    case CT_TAB:
      if (record->event.pressed) {
        if (!(get_mods() & MOD_BIT(KC_LCTL))) {
          register_mods(MOD_BIT(KC_LCTL));
        }
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      return false;
      break;
    case CT_SHTAB:
      if (record->event.pressed) {
        if (!(get_mods() & MOD_BIT(KC_LCTL))) {
          register_mods(MOD_BIT(KC_LCTL));
        }
        register_mods(MOD_BIT(KC_LSFT));
        register_code(KC_TAB);
      } else {
        unregister_mods(MOD_BIT(KC_LSFT));
        unregister_code(KC_TAB);
      }
      return false;
      break;
    case LANG_ALT_T:
      if (record->event.pressed) {
        _lang_alt_t_pressed = true;
        _lang_alt_t_timer = timer_read();
      } else {
        if (_prev_keycode == LANG_ALT_T && _lang_alt_t_pressed && timer_elapsed(_lang_alt_t_timer) < 300) {
          register_mods(MOD_BIT(KC_LCMD));
          register_code(KC_SPC);
          unregister_code(KC_SPC);
          unregister_mods(MOD_BIT(KC_LCMD));
        } else {
          unregister_mods(MOD_BIT(KC_LALT));
        }
        _lang_alt_t_pressed = false;
      }
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
  _prev_keycode = keycode;
  return true;
}

static uint16_t prev_layer = _QWERTY;

layer_state_t layer_state_set_user(layer_state_t state) {
  uint16_t layer = get_highest_layer(state);

  switch (layer) {
  case _TABS:
    break;
  default: //  for any other layers, or the default layer
    switch (prev_layer) {
      case _TABS:
        if (get_mods() & MOD_BIT(KC_LCMD)) {
          unregister_mods(MOD_BIT(KC_LCMD));
        }
        if (get_mods() & MOD_BIT(KC_LCTL)) {
          unregister_mods(MOD_BIT(KC_LCTL));
        }
        break;
    }
    break;
  }
  prev_layer = layer;
  return state;
}
