#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LSFT_T(KC_TAB), KC_A, KC_S, KC_D, LT(4,KC_F), KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, MO(1), KC_SPC, KC_ENT, MO(2), KC_LGUI),
	[1] = LAYOUT(KC_PWR, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_TRNS, RALT(KC_W), RALT(KC_Q), RALT(KC_P), KC_LCTL, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_MSTP, KC_MUTE, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_TRNS, MO(1), KC_SPC, KC_ENT, MO(2), KC_TRNS),
	[2] = LAYOUT(KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, LSFT_T(KC_TAB), KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WH_U, KC_MINS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV, KC_LCTL, KC_CALC, KC_SLEP, KC_BTN2, KC_BTN1, KC_WH_D, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD, KC_TRNS, MO(1), KC_SPC, KC_ENT, MO(2), KC_TRNS),
	[3] = LAYOUT(RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI_T(KC_LANG2), MO(1), KC_SPC, KC_ENT, MO(2), LALT_T(KC_LANG1)),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};