/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

// Initialize matrix with nothing...

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP( \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};
      
      /*KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO));
      */


/*

        // KC_APP, KC_MENU, KC_RGUI
//
*/

void setupKeymap() {

   uint32_t layer0_single[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_F7,     KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_PSCREEN, KC_SCROLLLOCK, KC_PAUSE, \
        KC_8,      KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_INSERT,  KC_HOME,       KC_PGUP, \
        KC_I,      KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, KC_DELETE,  KC_END,        KC_PGDOWN, \
        KC_K,      KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,  KC_NO,   KC_NO,      KC_NO,         KC_NO, \
        KC_COMM,   KC_DOT,  KC_NO,   KC_SLSH,  KC_RSFT, KC_NO,   KC_NO,      KC_UP,         KC_NO, \
        KC_NO,     KC_RALT, KC_APP,  KC_RCTRL, KC_NO,   KC_NO,   KC_LEFT,    KC_DOWN,       KC_RIGHT, \
        KC_ESC,    KC_NO,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,      KC_F6,         KC_NO, \
        KC_GRV,    KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_6,       KC_7,          KC_NO, \
        KC_TAB,    KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_Y,       KC_U,          KC_NO, \  
        KC_CAPS,   KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_H,       KC_J,          KC_NO, \
        KC_LSHIFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_N,       KC_M,          KC_NO, \
        KC_LCTRL,  KC_LGUI, KC_LALT, KC_NO,    KC_NO,   KC_SPC,  KC_NO,      KC_NO,         KC_NO \
    );
//        ,LAYER_1,

/*
 // Layer 1 (Raise)
    uint32_t layer1_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_PLUS, KC_6,    KC_7,    KC_8,    KC_9,     KC_0,      KC_DEL,  \
        KC_RBRC, KC_F6,   KC_MINS, KC_EQL,  KC_LBRC,  KC_RBRC,   KC_BSLS,   \
        KC_SPC,  KC_F12,  KC_TILD, KC_PIPE, KC_UNDS,  KC_UNDS,   KC_ENTER,  \
        _______, KC_SPC,  LAYER_2, KC_LEFT, KC_DOWN,  KC_UP,     KC_RIGHT \
        );




// Layer 2 (lower)
    uint32_t layer2_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_EQUAL,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,  \
        KC_RPRN,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,   \
        KC_SPC,    KC_F12,  KC_NUTL, KC_NUPI, KC_LBRC, KC_RBRC, KC_ENTER,  \
        _______,   KC_SPC,  LAYER_2, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT \
        );



// Layer 3
    uint32_t layer3_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_NUMLOCK,   KC_F6,    KC_F7,    KC_F8,    KC_F9,        KC_F10,         KC_KP_MINUS,  \
        XXXXXXX,      KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_KP_4,      KC_KP_5,        KC_KP_PLUS,   \
        KC_SPC ,      KC_KP_6,  KC_KP_7,  KC_KP_8,  KC_KP_9,      KC_KP_0,        KC_KP_ENTER,  \
        _______,      KC_SPC,   LAYER_2,  KC_INSERT,  KC_KP_DOT,  KC_KP_ASTERISK, KC_KP_SLASH \
        );
*/

    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
                //matrix[row][col].addActivation(_L1, Method::PRESS, layer1_single[row][col]);
                //matrix[row][col].addActivation(_L2, Method::PRESS, layer2_single[row][col]);
                //matrix[row][col].addActivation(_L3, Method::PRESS, layer3_single[row][col]);
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }
}
