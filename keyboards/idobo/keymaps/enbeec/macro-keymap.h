// ctrl + gui + alt
#define TRI_L   KC_LCTL, KC_LGUI, KC_LALT
#define TRI_R   KC_RALT, KC_RGUI, KC_RCTL

// adjust layer modifiers
#define ADJ_ESC LT(ADJUST, KC_ESC)

// function layer modifiers
#define FN_SPC LT(FN_LAY, KC_SPC)
#define FN_TAP TT(FN_LAY)

// bonus layer modifiers
#define BONUS_T TT(_BONUS)

// raise/lower LT shortcuts
#define LOWER_BSPC LT(_LOWER, KC_BSPC)
#define RAISE_ENT LT(_RAISE, KC_ENT)
#define LOWER_SPC LT(_LOWER, KC_SPACE)
#define RAISE_SPC LT(_RAISE, KC_SPACE)

// left hand qwert
#define NUM__ROW___L    KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define SYMBOLS____L    KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC
#define Q___THRU___T    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T
#define A___THRU___F    KC_A,   KC_S,   KC_D,   KC_F,   KC_G
#define Z___THRU___B    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

// right hand yuiop
#define NUM__ROW___R    KC_6,   KC_7,   KC_8,   KC_9,   KC_0
#define SYMBOLS____R    KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN
#define Y___THRU___P    KC_Y,   KC_U,   KC_I,   KC_O,   KC_P
#define H_THRU_COLON    KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN
#define N_THRU_SLASH    KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLASH

// trans
#define __________3_TRANS______ _______,_______,_______
#define ____________4_TRANS____________ _______,_______,_______,_______
#define _______________5_TRANS_________________ _______,_______,_______,_______,_______

// planck spacebar
#define PLANCK_SPACE MO(_LOWER),FN_SPC,XXXXXXX,MO(_RAISE)

#define ____________FUNC_KEY__L________________ KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5
#define ____________FUNC_KEY__R________________ KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10

// right planck qwert
#define ____________RAISE__R1_L________________ SYMBOLS____R
#define ____________RAISE__R2_L________________ KC_PIPE,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR
#define ____________RAISE__R3_L________________ _______,KC_TILD,_______,_______,_______
#define ____________LOWER__R1_L________________ NUM__ROW___R
#define ____________LOWER__R2_L________________ KC_BSLS,KC_MINS,KC_EQL ,KC_LBRC,KC_RBRC
#define ____________LOWER__R3_L________________ _______,KC_GRAVE,_______,_______,_______

// left planck yuiop
#define ____________RAISE__R1_R________________ SYMBOLS____L
#define ____________RAISE__R2_R________________ _______,_______,_______,_______,_______
#define ____________RAISE__R3_R________________ _______,_______,_______,_______,_______
#define ____________LOWER__R1_R________________ NUM__ROW___L
#define ____________LOWER__R2_R________________ _______,_______,_______,_______,_______
#define ____________LOWER__R3_R________________ _______,_______,_______,_______,_______
