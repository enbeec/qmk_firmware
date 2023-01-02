#include QMK_KEYBOARD_H
# 1 "./macro-keymap.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 367 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "./macro-keymap.c" 2
# 1 "./macro-keymap.h" 1
# 2 "./macro-keymap.c" 2

enum {
  QWERTY = 0,
  PLANCK,
  _RAISE,
  _LOWER,
  FN_LAY,
  _BONUS,
  GAMERR,
  ADJUST
};
# 30 "./macro-keymap.c"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [QWERTY] = LAYOUT_ortho_5x15(
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, XXXXXXX,XXXXXXX,XXXXXXX,
            LT(ADJUST, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT ,KC_F21 ,KC_F22 ,KC_F23 ,
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLASH, KC_RSFT,KC_BTN1,KC_LOCK,KC_BTN2,
            TT(FN_LAY), KC_LCTL, KC_LGUI, KC_LALT, MO(_LOWER),LT(FN_LAY, KC_SPC),XXXXXXX,MO(_RAISE), KC_RALT, KC_RGUI, KC_RCTL, TT(FN_LAY) ,_______,TT(GAMERR),TT(PLANCK)
   ),
 [PLANCK] = LAYOUT_ortho_5x15(
            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, XXXXXXX,XXXXXXX,XXXXXXX,
            LT(ADJUST, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, XXXXXXX,XXXXXXX,XXXXXXX,
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLASH, KC_RSFT,XXXXXXX,XXXXXXX,XXXXXXX,
            TT(FN_LAY), KC_LCTL, KC_LGUI, KC_LALT, MO(_LOWER),LT(FN_LAY, KC_SPC),XXXXXXX,MO(_RAISE), KC_RALT, KC_RGUI, KC_RCTL, XXXXXXX,_______,_______,_______
   ),
 [_LOWER] = LAYOUT_ortho_5x15(
            _______,KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,_______,_______,_______,
            _______,KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,KC_BSLS,KC_MINS,KC_EQL ,KC_LBRC,KC_RBRC,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,KC_GRV ,KC_QUOT,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [_RAISE] = LAYOUT_ortho_5x15(
            _______,KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,_______,_______,_______,
            _______,KC_EXLM,KC_AT, KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,KC_PIPE,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,_______,_______,_______,_______,
            _______,_______,KC_TILD,_______,_______,_______,_______,KC_TILD,KC_DQUO,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [FN_LAY] = LAYOUT_ortho_5x15(
            _______,KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,_______,_______,_______,
            _______,_______,_______, KC_UP, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            KC_CAPS,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [_BONUS] = LAYOUT_ortho_5x15(
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [GAMERR] = LAYOUT_ortho_5x15(
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,_______,_______,_______,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, _______,_______,_______,
            LT(ADJUST, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT ,_______,_______,_______,
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLASH, KC_RSFT,_______,KC_LOCK,_______,
            MO(_LOWER), KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE,XXXXXXX,KC_SPACE,KC_SPACE, KC_RALT, KC_RGUI, KC_RCTL, MO(_RAISE),_______,_______,_______
   ),
 [ADJUST] = LAYOUT_ortho_5x15(
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______, RESET ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______, DEBUG ,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,AG_NORM,AG_SWAP,_______,_______,_______,_______,AG_SWAP,AG_NORM,_______,_______,_______,_______,_______
   )

};

const uint8_t RGBLED_RAINBOW_SWIRL_INTERVALS[] PROGMEM = {100, 50, 10};
uint8_t prev = QWERTY;
uint32_t check;
uint32_t desired = 9;

void matrix_init_user() {
 rgblight_sethsv(HSV_PURPLE);
}

uint32_t layer_state_set_user(uint32_t state) {
 uint8_t layer = biton32(state);

 if (prev != ADJUST) {
  switch (layer) {
   case QWERTY:
    rgblight_mode(1);
    rgblight_sethsv(HSV_PURPLE);
    break;
   case PLANCK:
    rgblight_mode(3);
    rgblight_sethsv(HSV_PURPLE);
    break;
   case _RAISE:
    if (rgblight_get_mode() == 3) {
        rgblight_mode(14);
    }
    break;
   case _LOWER:
    if (rgblight_get_mode() == 3) {
        rgblight_mode(9);
    }
    break;
   case FN_LAY:
    rgblight_sethsv(HSV_WHITE);
    break;
   case _BONUS:
    rgblight_sethsv(HSV_ORANGE);
    break;
    case GAMERR:
    rgblight_sethsv(HSV_GREEN);
    break;
   case ADJUST:
    break;
  }
 } else {
  desired = rgblight_get_mode();
 }
 prev = layer;
 return state;
}
