#include QMK_KEYBOARD_H

enum { QWERTY = 0, _RAISE, _LOWER, FN_LAY, _BONUS, ADJUST };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [QWERTY] = LAYOUT_ortho_5x15(
            KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
            LT(ADJUST,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT ,XXXXXXX,XXXXXXX,XXXXXXX,
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLASH, KC_RSFT,XXXXXXX,XXXXXXX,XXXXXXX,
            TT(FN_LAY), KC_LCTL, KC_LGUI, KC_LALT, LT(_LOWER, KC_BSPC),LT(FN_LAY, KC_SPC),LT(FN_LAY, KC_SPC),LT(_RAISE, KC_ENT), KC_RALT, KC_RGUI, KC_RCTL, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
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
            _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,_______,_______,_______,_______,
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

 [ADJUST] = LAYOUT_ortho_5x15(
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______,_______, RESET ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,_______, DEBUG ,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,_______,
            _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
            _______,_______,AG_NORM,AG_SWAP,_______,_______,_______,_______,AG_SWAP,AG_NORM,_______,_______,_______,_______,_______
   )

};

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
    rgblight_sethsv(HSV_PURPLE);
    break;
   case FN_LAY:
    rgblight_sethsv(HSV_WHITE);
    break;
   case _BONUS:
    rgblight_sethsv(HSV_ORANGE);
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
