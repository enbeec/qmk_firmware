/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * GNU General Public License for more details.
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers { _QWERTY, _LOWER, _RAISE, _FUNK, _ADJUST };

enum preonic_keycodes { QWERTY = SAFE_RANGE, LOWER, RAISE, FUNK, BACKLIT };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
     * ,-----------------------------------------------------------------------------------.
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | GUI  | Alt  | Ctrl |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_preonic_grid(
      TT(_FUNK),   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,              KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,              KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
      KC_ESC,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,              KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
      KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,              KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
      TT(_FUNK), KC_LCTL, KC_LALT, KC_LGUI, LOWER,   LT(_FUNK, KC_SPC), LT(_FUNK, KC_SPC), RAISE,   KC_RGUI, KC_RALT, KC_RCTL, TT(_ADJUST)
    ),

    /* Lower
     * ,-----------------------------------------------------------------------------------.
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |   \  |   -  |   =  |   [  |   ]  |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |   `  |   '  |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |             |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_LOWER] = LAYOUT_preonic_grid(
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
      _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      _______, _______, _______, _______, _______, _______, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______,
      _______, _______, _______, _______, _______, _______, _______, KC_GRV,  KC_QUOT, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Raise
     * ,-----------------------------------------------------------------------------------.
     * |      |  F11 |  F12 |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |  F19 | F20  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |   |  |   _  |   +  |   {  |   }  |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |   ~  |   "  |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |             |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_RAISE] = LAYOUT_preonic_grid(
      _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
      _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      _______, _______, _______, _______, _______, _______, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______,
      _______, _______, _______, _______, _______, _______, _______, KC_TILD, KC_DQUO, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Funk (Val's fun stuff)
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      | Up   |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Caps |      | Left | Down | Right|      | Left | Down | Up   | Right|      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |             |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_FUNK] = LAYOUT_preonic_grid(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______,
      KC_CAPS, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
      _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______
    ),

    /* Adjust (Lower + Raise)
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |Reset |      |      |      |Aud on|Audoff|      |  Del |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |Debug |      |      |      |      |Musoff|Mus on|      |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |MidOff|MidOn |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |AGnorm|AGswap|      |             |      |AGswap|AGnorm|      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_ADJUST] = LAYOUT_preonic_grid(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, QK_BOOT, _______, _______, _______, MI_OFF,  MI_ON,   _______, KC_DEL,
      _______, _______, _______, DEBUG,   _______, _______, _______, _______, MU_OFF,  MU_ON,   _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, AU_OFF,  AU_ON,   _______, _______,
      _______, _______, AG_NORM, AG_SWAP, _______, _______, _______, _______, AG_SWAP, AG_NORM, _______, _______
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
            /*
              case BACKLIT:
                  if (record->event.pressed) {
                      register_code(KC_RSFT);
      #ifdef BACKLIGHT_ENABLE
                      backlight_step();
      #endif
      #ifdef RGBLIGHT_ENABLE
                      rgblight_step();
      #endif
      #ifdef __AVR__
                      writePinLow(E6);
      #endif
                  } else {
                      unregister_code(KC_RSFT);
      #ifdef __AVR__
                      writePinHigh(E6);
      #endif
                  }
                  return false;
                  break;
            */
    }
    return true;
};

bool     muse_mode      = false;
uint8_t  last_muse_note = 0;
uint16_t muse_counter   = 0;
uint8_t  muse_offset    = 70;
uint16_t muse_tempo     = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo += 1;
            } else {
                muse_tempo -= 1;
            }
        }
    } else {
        if (clockwise) {
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        } else {
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        }
    }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
        case RAISE:
        case LOWER:
            return false;
        default:
            return true;
    }
}
