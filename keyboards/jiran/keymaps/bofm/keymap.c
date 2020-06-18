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
  ADJUST,
};

////////// custom aliases and keycodes //////////////

#define KC_CMD KC_LGUI
#define KC_RCMD KC_RGUI
#define KC_ALT_L LALT(KC_LEFT)
#define KC_ALT_R LALT(KC_RGHT)
#define KC_LOENT LT(_LOWER, KC_ENT)
#define KC_LOL LT(_LOWER, KC_L)
#define KC_ALDEL RALT_T(KC_DEL)
#define KC_LSHSPC LSFT_T(KC_SPC)
#define KC_LSEQ LSFT_T(KC_EQL)
#define KC_RALDEL RALT_T(KC_DEL)
#define KC_LOESC LT(_LOWER, KC_ESC)
#define KC_ALBSPC LALT_T(KC_BSPC)
#define KC_LOF LT(_LOWER, KC_F)
#define KC_RCTQT RCTL_T(KC_QUOT)
#define KC_RSHQT RSFT_T(KC_QUOT)
#define KC_SSSC LT(_SSS, KC_C)
#define KC_CMD_L LGUI(KC_LEFT)
#define KC_CMD_R LGUI(KC_RIGHT)
#define KC_CMDSP LGUI(KC_SPC)
#define KC_CMD_SP_T LGUI_T(KC_SPC)
#define KC_1PASS LGUI(LALT(KC_BSLS))
#define KC_LCAG LCTL(LALT(KC_LGUI))
#define KC_LPRN LSFT(KC_9)
#define KC_RPRN LSFT(KC_0)
#define KC_LCBR LSFT(KC_LBRC)
#define KC_RCBR LSFT(KC_RBRC)
#define KC_PLUS LSFT(KC_EQL)
#define KC_MULT LSFT(KC_8)
#define KC_RAIDEL LT(_RAISE, KC_DEL)
#define KC_LTTABS LT(_TABS, KC_TAB)
#define KC_PIPE LSFT(KC_BSLS)
#define KC_GOTODEF LCMD(KC_BSLS)
#define KC_ADJUST ADJUST
#define KC________ _______

////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                 GESC  ,    1   ,    2   ,    3   ,    4   ,    5   ,            6   ,    7   ,    8   ,    9   ,    0   ,  MINS  ,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
         LCAG , LTTABS ,    Q   ,    W   ,    E   ,    R   ,    T   ,            Y   ,    U   ,    I   ,    O   ,    P   ,  LBRC  ,  RBRC  ,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                 LSFT  ,    A   ,    S   ,    D   ,   LOF  ,    G   ,            H   ,    J   ,    K   ,   LOL  ,  SCLN  ,  RSHQT ,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                 LCTL  ,    Z   ,    X   ,  SSSC  ,    V   ,    B   ,            N   ,    M   ,  COMM  ,   DOT  ,  SLSH  ,  RCTL  ,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┼────────┴────────┴────────┴────────┘
                                            LALT  ,CMD_SP_T,  LOESC ,          LOENT , ALBSPC , RAIDEL
                                  //     └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT_kc(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                 GRV   ,   F1   ,   F2   ,   F3   ,   F4   ,   F5   ,           F6   ,   F7   ,   F8   ,   F9   ,   F10  ,   EQL  ,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
         ESC  ,  NLCK  , _______, _______,  LBRC  ,  RBRC  ,  PLUS  ,          PGUP  ,  ALT_L ,   UP   ,  ALT_R ,  1PASS ,  LBRC  ,  RCMD  ,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                 LSFT  , _______, _______,  LPRN  ,  RPRN  ,   EQL  ,          PGDN  ,  LEFT  ,  DOWN  ,  RGHT  , GOTODEF,  RCTL  ,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                 LCTL  , _______, _______,  LCBR  ,  RCBR  ,  PIPE  ,          MUTE  ,  CMD_L ,  MINS  ,  CMD_R ,  BSLS  ,  RCTL  ,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┴────────┘
                                            LALT  ,CMD_SP_T,   ESC  ,           ENT  ,   DEL  , _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT_kc(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                  GRV  ,   F1   ,   F2   ,   F3   ,   F4   ,   F5   ,           F6   ,   F7   ,   F8   ,   F9   ,   F10  ,   F11  ,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
         CMD  ,  CAPS  ,  SLSH  ,    7   ,    8   ,    9   ,  PLUS  ,          VOLU  ,    U   ,   UP   ,    O   ,    P   ,  LBRC  ,  F12   ,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                 LSEQ  ,  MULT  ,    4   ,    5   ,    6   ,  MINS  ,          MUTE  ,  LEFT  ,  DOWN  ,  RGHT  ,  SCLN  ,  RCTL  ,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                 LCTL  ,    0   ,    1   ,    2   ,    3   ,   DOT  ,          VOLD  ,    M   , _______,   DOT  ,  BSLS  ,  RCTL  ,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘────────┘
                                           ADJUST ,   CMD  ,   SPC  ,           ENT  ,  BSPC  , _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_SSS] = LAYOUT_kc(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______,  CMDSP , _______,         _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘
                                          _______,  _______, _______,         _______, _______, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_TABS] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
       _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                _______, _______, _______, _______, _______, _______,         _______,CMD_TAB,CMD_SHTAB, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,         _______, CT_TAB, CT_SHTAB, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘
                                           _______,  _______, _______,        _______, _______, _______
                                    //   └────────┴────────┴────────┘       └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐       ┌────────┬────────┬────────┬────────┬────────┬────────┐
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
        RESET , _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤       ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤       ├────────┼────────┴────────┴────────┴────────┘
                                           _______, KC_CMD , KC_SPC ,         KC_ENT , KC_BSPC, _______
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
