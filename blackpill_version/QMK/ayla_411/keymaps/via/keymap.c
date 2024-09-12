// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// see keyboard.info

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};


enum custom_keycodes
{
    P1, P2, P3  // store a few sample passwords
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Fix: #1 swapped  KC_ENT,   KC_TILDE (now KC_NUHS), worked for first pcb (temp until new pcb, then revert KCC_ENT, KC_TILDE)
    // Replace KC_TILDE with KC_NUHS for ascii (non us) keep for new pcb...
    // #1 for next discrete board

    // use this for new discrete pcb, else fix 1 above to compile for blackpill first board

    /*
    [_BASE] = LAYOUT_411_ISO(
                KC_TRNS, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL,   KC_PAUSE,
                KC_TRNS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INSERT, KC_HOME,
                KC_PGUP, KC_TRNS, KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_DEL,    KC_END,
                KC_PGDN, KC_TRNS, KC_CAPS, KC_A,    KC_S,    KC_D,     KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,    KC_TRNS,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_LSFT, KC_Z,     KC_X,   KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_RSFT,   KC_TRNS,
                KC_UP,   KC_TRNS, KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC, KC_RALT, MO(_FN), KC_MENU, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
                ),
    [_FN]   = LAYOUT_411(
                QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI,   RGB_HUD,
                _______, _______, P1,      P2,      P3,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   RGB_VAI,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
            ),

    */

    /* Arranged in 10x10 matrix (MATRIX_ROWS 10, MATRIX_COLS 10) as this reduces the GPIO requirements from 23 to 20 pins)

       Note for ISO layout, the forward slash has moved to right side beside back slash (KC_SLSH, KC_BSLS, KC_RSFT), this allows for a larger left shift...
       see https://github.com/phpbbireland/mioke80/blob/main/blackpill_version/images/ayla80v2.png
       For ANSI layout, this may/will change...
    */

    /*  Row:    0        1        2          3        4         5         6         7        8        9 */
    [_BASE] = LAYOUT_411(
                KC_TRNS, KC_ESC,  KC_F1,     KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,
                KC_F9,   KC_F10,  KC_F11,    KC_F12,  KC_PSCR,  KC_SCRL,  KC_PAUSE, KC_TRNS, KC_GRV,  KC_1,
                KC_2,    KC_3,    KC_4,      KC_5,    KC_6,     KC_7,     KC_8,     KC_9,    KC_0,    KC_MINS,
                KC_EQL,  KC_BSPC, KC_INSERT, KC_HOME, KC_PGUP,  KC_TRNS,  KC_TAB,   KC_Q,    KC_W,    KC_E,
                KC_R,    KC_T,    KC_Y,      KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC, KC_RBRC, KC_DEL,
                KC_END,  KC_PGDN, KC_TRNS,   KC_CAPS, KC_A,     KC_S,     KC_D,     KC_F,    KC_G,    KC_H,
                KC_J,    KC_K,    KC_L,      KC_SCLN, KC_QUOT,  KC_NUHS,  KC_ENT,   KC_TRNS, KC_TRNS, KC_TRNS,
                KC_TRNS, KC_LSFT, KC_Z,      KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,    KC_COMM,
                KC_DOT,  KC_SLSH, KC_BSLS,   KC_RSFT, KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS, KC_LCTL, KC_LGUI,
                KC_LALT, KC_SPC,  KC_RALT,   MO(_FN), KC_MENU,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RIGHT
                ),

    [_FN]   = LAYOUT_411(
                QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_HUD, _______, _______, P1,
                P2,      P3,      _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
            ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
        case P1:
            if(record->event.pressed)
            {
                SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_R) SS_UP(X_LGUI) SS_DELAY(50) "passwrd1" SS_TAP(X_ENTER));
            }
            break;
        case P2:
            if(record->event.pressed)
            {
                SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_R) SS_UP(X_LGUI) SS_DELAY(50) "passwrd2" SS_TAP(X_ENTER));
            }
            break;
        case P3:
            if(record->event.pressed)
            {
                SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_R) SS_UP(X_LGUI) SS_DELAY(50) "open_sesame" SS_TAP(X_ENTER));
            }
            break;
    }
    return true;
};
