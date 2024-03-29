// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_korean.h"

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
enum layer_names {
    _Basic, //chrome shortcut keys for surffing
    _Window, //window shortcut keys + file explorer shortcut keys
    _Excel,
    _Hangul,
    _Presantation,
    _Autocad,
    _Fusion360,
    _Kicad,
    _Clipstudio,
    _Illustrator,
    _PhotoShop,
    _PremierePro,
    _12,
    _13,
    _14,
    _15,


};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    *                   
    *                   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
    *                   │   │   │   │   │ │   │   │   │   │ │   │   │   │   │ │   │   │   │   │ │f13│f14│f15│f16│
    *            ┌───┐  ├───┼───┼───┼───┤ ├───┼───┼───┼───┤ ├───┼───┼───┼───┤ ├───┼───┼───┼───┤ ├───┼───┼───┼───┤
    *            │esc│  │ f1│ f2│ f3│ f4│ │ f5│ f6│ f7│ f8│ │ f9│f10│f11│f12│ │   │   │   │   │ │f17│f18│f19│f20│
    *            └───┘  └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘
    *            
    *┌───┬───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┬───┬───┐   ┌───┬───┬───┬───┐
    *│TAB│ s │   │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backs │   │ < │ p.│ > │   │num│ / │ + │ - │
    *├───┼───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤   ├───┼───┼───┤   ├───┼───┼───┼───┤
    *│ L │ s │   │ Tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │ \   │   │del│   │   │   │ 7 │ 8 │ 9 │ + │
    *├───┼───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤   └───┴───┴───┘   ├───┼───┼───┤   │
    *│ x │ v │   │ Caps │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ ' │  Enter │                   │ 4 │ 5 │ 6 │   │
    *├───┼───┤   ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤       ┌───┐       ├───┼───┼───┼───┤
    *│ a │ c │   │ Shift  │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │   Shift  │       │ ↑ │       │ 1 │ 2 │ 3 │ e │
    *├───┼───┤   ├─────┬──┴──┬┴───┴┬──┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┬───┤   ┌───┼───┼───┐   ├───┴───┼───┤ n │
    *│ y │ z │   │ Ctrl│ Win │ Alt │         space       │k/e│Han│Alt│ Fn│Ctr│   │ ← │ ↓ │ → │   │   0   │ . │ t │
    *└───┴───┘   └─────┴─────┴─────┴─────────────────────┴───┴───┴───┴───┴───┘   └───┴───┴───┘   └───────┴───┴───┘
    */
    [_Basic] = LAYOUT(
        KC_MUTE, TO(0),                             LCTL(KC_TAB), LCTL(LSFT(KC_TAB)), LCTL(LSFT(KC_B)), LCTL(LSFT(KC_DEL)), LCTL(KC_J), LCTL(KC_N), LCTL(KC_W), LCTL(LSFT(KC_T)), LCTL(LSFT(KC_N)), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,  KC_F13, KC_F14, KC_F15, KC_F16,
          LGUI(KC_A),                 KC_ESC,       KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,   LGUI(KC_V),  LGUI(KC_QUOT), KC_CALC, KC_MYCM,   KC_F17, KC_F18, KC_F19, KC_F20,

        LALT(KC_TAB), KC_PSCR,      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_DEL,  LSFT(KC_DEL),  LALT(KC_F4),    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        LGUI(KC_L), LCTL(KC_S),  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_MPRV,  KC_MPLY, KC_MNXT,                   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        LCTL(KC_X), LCTL(KC_V),  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                                   KC_P4,   KC_P5,   KC_P6,
        LCTL(KC_A), LCTL(KC_C),  KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,                               KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        LCTL(KC_Y), LCTL(KC_Z),  KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                      KC_LNG1, KC_LNG2, KC_RALT, KC_CAPS, KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,                    KC_P0,            KC_PDOT
    ),

    [_Window] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Excel] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Hangul] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Presantation] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Autocad] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Fusion360] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Kicad] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Clipstudio] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_Illustrator] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_PhotoShop] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_PremierePro] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_12] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),     

    [_13] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_14] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    ),

    [_15] = LAYOUT(
        _______, _______,                _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,            _______,     _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,

        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______, _______,    _______,    _______,  _______, _______,      _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,                                     _______,  _______,  _______,
        _______, _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,             _______,             _______,                _______,  _______,  _______,  _______,
        _______, _______,   _______,  _______,  _______,                         _______,                                      _______,  _______,  _______,  _______,  _______,    _______, _______, _______,       _______,            _______
    )
};

//_______

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  // First encoder (E1)
  if (index == 0) {
    switch (get_highest_layer(layer_state)) {
      default:
      // keyboard volume up/down
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;
    }
  // Second encoder (E2)
  } else if (index == 1) {
    switch (get_highest_layer(layer_state)) {
      default:
        // layer up/down
        if (clockwise) {
          if (layer_state_is(0)) {
            layer_move(1);
          }
          else if (layer_state_is(1)) {
            layer_move(2);
          }
          else if (layer_state_is(2)) {
            layer_move(3);
          }
          else if (layer_state_is(3)) {
            layer_move(4);
          }
          else if (layer_state_is(4)) {
            layer_move(5);
          }
          else if (layer_state_is(5)) {
            layer_move(6);
          }
          else if (layer_state_is(6)) {
            layer_move(7);
          }
          else if (layer_state_is(7)) {
            layer_move(8);
          }
          else if (layer_state_is(8)) {
            layer_move(9);
          }
          else if (layer_state_is(9)) {
            layer_move(10);
          }
          else if (layer_state_is(10)) {
            layer_move(11);
          }
          else if (layer_state_is(11)) {
            layer_move(12);
          }
          else if (layer_state_is(12)) {
            layer_move(13);
          }
          else if (layer_state_is(13)) {
            layer_move(14);
          }
          else if (layer_state_is(14)) {
            layer_move(15);
          }
          else {
            layer_move(0);
          }
        } else {
          if (layer_state_is(15)) {
            layer_move(14);
          }
          else if (layer_state_is(14)) {
            layer_move(13);
          }
          else if (layer_state_is(13)) {
            layer_move(12);
          }
          else if (layer_state_is(12)) {
            layer_move(11);
          }
          else if (layer_state_is(11)) {
            layer_move(10);
          }
          else if (layer_state_is(10)) {
            layer_move(9);
          }
          else if (layer_state_is(9)) {
            layer_move(8);
          }
          else if (layer_state_is(8)) {
            layer_move(7);
          }
          else if (layer_state_is(7)) {
            layer_move(6);
          }
          else if (layer_state_is(6)) {
            layer_move(5);
          }
          else if (layer_state_is(5)) {
            layer_move(4);
          }
          else if (layer_state_is(4)) {
            layer_move(3);
          }
          else if (layer_state_is(3)) {
            layer_move(2);
          }
          else if (layer_state_is(2)) {
            layer_move(1);
          }
          else if (layer_state_is(1)) {
            layer_move(0);
          }
          else {
            layer_move(15);
          }
        }
        break;
    }
  // Third encoder (E3)
  } else if (index == 2) {
    switch (get_highest_layer(layer_state)) {
      default:
        if (clockwise) {
          tap_code16(KC_BRIGHTNESS_UP);
        } else {
          tap_code16(KC_BRIGHTNESS_DOWN);
        }
        break;
    }
  }
    return true;
}
#endif




#ifdef OLED_ENABLE

void render_space(void) {
  oled_write_P(PSTR("     "), false);
}


void oled_render_layer_state(void) {
  oled_write_P(PSTR("Layer: "), false);
  if(layer_state_is(0)) {
    oled_write_ln_P(PSTR("Browser"), false);
  } 
  else if(layer_state_is(1)) {
    oled_write_ln_P(PSTR("Window"), false);
  } 
  else if(layer_state_is(2)) {
    oled_write_ln_P(PSTR("Excel"), false);
  }
  else if(layer_state_is(3)) {
    oled_write_ln_P(PSTR("Hangul"), false);
  }
  else if(layer_state_is(4)) {
    oled_write_ln_P(PSTR("Presantation"), false);
  }
  else if(layer_state_is(5)) {
    oled_write_ln_P(PSTR("AutoCad"), false);
  }
  else if(layer_state_is(6)) {
    oled_write_ln_P(PSTR("Fusion360"), false);
  }
  else if(layer_state_is(7)) {
    oled_write_ln_P(PSTR("Kicad"), false);
  }
  else if(layer_state_is(8)) {
    oled_write_ln_P(PSTR("ClipStudio"), false);
  }
  else if(layer_state_is(9)) {
    oled_write_ln_P(PSTR("Illustrator"), false);
  }
  else if(layer_state_is(10)) {
    oled_write_ln_P(PSTR("PhotoShop"), false);
  }
  else if(layer_state_is(11)) {
    oled_write_ln_P(PSTR("PremierePro"), false);
  }
  else if(layer_state_is(12)) {
    oled_write_ln_P(PSTR("12"), false);
  }
  else if(layer_state_is(13)) {
    oled_write_ln_P(PSTR("13"), false);
  }
  else if(layer_state_is(14)) {
    oled_write_ln_P(PSTR("14"), false);
  }
  else {
    oled_write_ln_P(PSTR("15"), false);
  }
}


bool oled_task_user(void) {
  oled_write_ln_P(PSTR("Nullius140"), false);
  oled_render_layer_state();
    return false;
}

#endif