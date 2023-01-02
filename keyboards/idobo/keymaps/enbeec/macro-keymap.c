#include "macro-keymap.h"

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

// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │
// │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
// │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │   │   │   │   │   │ | │ _ │ + │ { │ } │
// │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │
// │   │   │   │   │   │ \ │ - │ = │ [ │ ] │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │   │   │   │   │   │   │ ~ │   │   │   │
// │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │
// │   │   │   │   │   │   │ ` │   │   │   │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [QWERTY] = LAYOUT_ortho_5x15(
            KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_TAB,         Q___THRU___T,                       Y___THRU___P,                       KC_DEL, XXXXXXX,XXXXXXX,XXXXXXX,
            ADJ_ESC,        A___THRU___F,                       H_THRU_COLON,                       KC_ENT ,KC_F21 ,KC_F22 ,KC_F23 ,
            KC_LSFT,        Z___THRU___B,                       N_THRU_SLASH,                       KC_RSFT,KC_BTN1,KC_LOCK,KC_BTN2,
            FN_TAP, TRI_L,                  PLANCK_SPACE,                                   TRI_R,  FN_TAP ,_______,TT(GAMERR),TT(PLANCK)
   ),
 [PLANCK] = LAYOUT_ortho_5x15(
            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_TAB,         Q___THRU___T,                       Y___THRU___P,                       KC_DEL, XXXXXXX,XXXXXXX,XXXXXXX,
            ADJ_ESC,        A___THRU___F,                       H_THRU_COLON,                       KC_ENT, XXXXXXX,XXXXXXX,XXXXXXX,
            KC_LSFT,        Z___THRU___B,                       N_THRU_SLASH,                       KC_RSFT,XXXXXXX,XXXXXXX,XXXXXXX,
            FN_TAP, TRI_L,                  PLANCK_SPACE,                                   TRI_R,  XXXXXXX,_______,_______,_______
   ),
 [_LOWER] = LAYOUT_ortho_5x15(
            _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,_______,_______,_______,
            _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   _______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,KC_BSLS,KC_MINS,KC_EQL ,KC_LBRC,KC_RBRC,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,KC_GRV ,KC_QUOT,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [_RAISE] = LAYOUT_ortho_5x15(
            _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,_______,_______,_______,
            _______,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,KC_PIPE,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,_______,_______,_______,_______,
            _______,_______,KC_TILD,_______,_______,_______,_______,KC_TILD,KC_DQUO,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
   ),
 [FN_LAY] = LAYOUT_ortho_5x15(
            _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,_______,_______,_______,
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
            KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,_______,_______,_______,
            KC_TAB,         Q___THRU___T,                       Y___THRU___P,                       KC_DEL, _______,_______,_______,
            ADJ_ESC,        A___THRU___F,                       H_THRU_COLON,                       KC_ENT ,_______,_______,_______,
            KC_LSFT,        Z___THRU___B,                       N_THRU_SLASH,                       KC_RSFT,_______,KC_LOCK,_______,
            MO(_LOWER), TRI_L,               KC_SPACE,XXXXXXX,KC_SPACE,KC_SPACE,             TRI_R, MO(_RAISE),_______,_______,_______
   ),
 [ADJUST] = LAYOUT_ortho_5x15(
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______, RESET ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______, DEBUG ,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,AG_NORM,AG_SWAP,_______,_______,_______,_______,AG_SWAP,AG_NORM,_______,_______,_______,_______,_______
   )

};

const uint8_t RGBLED_RAINBOW_SWIRL_INTERVALS[] PROGMEM = {100, 50, 10}; // Set the last one to 10ms for some speedy swirls
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
    rgblight_mode(1);// static
    rgblight_sethsv(HSV_PURPLE);
    break;
   case PLANCK:
    rgblight_mode(3); // breathing
    rgblight_sethsv(HSV_PURPLE);
    break;
   case _RAISE:
    if (rgblight_get_mode() == 3) { // no change for QWERTY
        rgblight_mode(14); // high swirl
    }
    break;
   case _LOWER:
    if (rgblight_get_mode() == 3) { // no change for QWERTY
        rgblight_mode(9); // low swirl
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
