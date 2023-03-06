/*
    K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08, \
    K09,  K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17, \
    K18,  K19,  K20,  K21,  K22,  K23,  K24,  K25,  K26, \
    K27,  K28,  K29,  K30,  K31,  K32,  K33,  K34,  K35, \
    K36,  K37,  K38,  K39,  K40,  K41,  K42,  K43,  K44, \
    K45,  K46,  K47,  K48,  K49,  K50,  K51,  K52,  K53, \
    K54,  K55,  K56,  K57,  K58,  K59,  K60,  K61,  K62, \
    K63,  K64,  K65,  K66,  K67,  K68,  K69,  K70,  K71, \
    K72,  K73,  K74,  K75,  K76,  K77,  K78,  K79,  K80, \
    K81,  K82,  K83,  K84,  K85,  K86,  K87,  K88,  K89, \
    K90,  K91,  K92,  K93,  K94,  K95,  K96,  K97,  K98, \
    K99, K100, K101, K102, K103, K104, K105, K106, K107\

    K00, no,  K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, K15, K16, \
    K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K30, K31, K32, K33, \
    K34, K35, K36, K37, K38, K39, K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K50, \
    K51, K52, K53, K54, K55, K56, K57, K58, K59, K60, K61, K62, no,  no,  no,  no,  no, \
    K68, K69, K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, no,  no,  no,  K83, no, \
    K85, K86, K87, no,  no,  K90, no , no,  no,  K94, K95, K96, K97, no, K99, K100, K101\
*/

/*
Copyright 2018 <Pierre Constantineau>
3-Clause BSD License
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"
#define KEYBOARD_SIDE SINGLE

#define DEVICE_NAME_M                         "ThéoKB"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_MODEL                        "ThéoKB_v1"                          /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME                   "ThéoCoutu"                      /**< Manufacturer. Will be passed to Device Information Service. */

//
//#define PERIPHERAL_COUNT 1 // more than 1 doesn't work yet...
//

#define KEYMAP( \
    K44,      K45, K46, K47, K48, K49, K50,  K00, K01, K02, K03, K04, K05, K06, K07, K08, \
    K51, K52, K53, K54, K55, K56, K57, K58,  K09, K10, K11, K12, K13, K14, K15, K16, K17, \
    K59, K60, K61, K62, K63, K64, K65, K66,  K18, K19, K20, K21, K22, K23, K24, K25, K26, \
    K67, K68, K69, K70, K71, K72, K73, K74,  K27, K28, K29, K30, K31, \
    K75, K76, K77, K78, K79, K80, K81, K82,  K32, K33, K34, K35,                K36, \
    K83, K84, K85,           K86,                K37, K38, K39, K40,      K41, K42, K43\
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08 }, \
    { K09,   K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17 }, \
    { K18,   K19,   K20,   K21,   K22,   K23,   K24,   K25,   K26 }, \
    { K27,   K28,   K29,   K30,   K31,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K32,   K33,  KC_NO,  K34,   K35,  KC_NO, KC_NO,  K36,  KC_NO }, \
    { KC_NO, K37,   K38,   K39,   K40,  KC_NO,  K41,   K42,   K43 }, \
 esc{ K44,  KC_NO,  K45,   K46,   K47,   K48,   K49,   K50,  KC_NO }, \
    { K51,   K52,   K53,   K54,   K55,   K56,   K57,   K58,  KC_NO }, \
    { K59,   K60,   K61,   K62,   K63,   K64,   K65,   K66,  KC_NO }, \
    { K67,   K68,   K69,   K70,   K71,   K72,   K73,   K74,  KC_NO }, \
    { K75,   K76,   K77,   K78,   K79,   K80,   K81,   K82,  KC_NO }, \
    { K83,   K84,   K85,  KC_NO, KC_NO,  K86,  KC_NO, KC_NO, KC_NO } \
}
#endif /* KEYBOARD_CONFIG_H */

/*
     F7,   F8,   F9,  F10,  F11,  F12, Prnt, Scrl, Paus, \
      8,    9,   10,   -_,   =+, Bksp, Inst, Home, PgUp, \
      I,    O,    P,   [{,   ]},   |\, Dlte,  End, PgDn, \
      K,    L,   ;:,   "', Entr,   no,   no,   no,  no, \
     <,,   >.,   no,   ?/, RShf,   no,   no,   Up,  no, \
     no, RAlt, RWin, RMnu, RCtl,   no, Left, Down, Rght, \
    Esc,   no,   F1,   F2,   F3,   F4,   F5,  F6,   no, \
      ~,    1,    2,    3,    4,    5,    6,    7,  no, \
    Tab,    Q,    W,    E,    R,    T,    Y,    U,  no, \
    Cap,    A,    S,    D,    F,    G,    H,    J,  no, \
    LSh,    Z,    X,    C,    V,    B,    N,    M,  no, \
    LCt, LWin, LAlt,  no,   no,  Space, no,   no,   no \
*/
