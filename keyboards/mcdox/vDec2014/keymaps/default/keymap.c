
/** Copyright 2020 Dave McEwan <cogitocumimpune@hotmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define MAC0 SEND_STRING("Hello World!")

/**
Layer0: Dvorak
,--------------------------------------------------.           ,--------------------------------------------------.
|  Esc   |   1  |   2  |   3  |   4  |   5  |  F4  |           |  F5  |   6  |   7  |   8  |   9  |   0  |   /    |
|--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
|  Tab   |   '  |   ,  |   .  |   P  |   Y  | LAlt |           |  [   |   F  |   G  |   C  |   R  |   L  |   =    |
|--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
|  ~L1   |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -    |
|--------+------+------+------+------+------| Del  |           |  ]   |------+------+------+------+------+--------|
|  BkSp  |   ;  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RCtrl  |
`--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
  |   ~  | Home | PgDn | PgUp | End  |                                       | Left |  Up  |  Dn  | Right|   \  |
  `----------------------------------'                                       `----------------------------------'
                                       ,-------------.       ,-------------.
                                       | Vol+ | Vol- |       | App  | RGui |
                                ,------|------|------|       |------+------+------.
                                |      |      | Mute |       |RShift|      |      |
                                |LShift|LCtrl |------|       |------| Enter| Space|
                                |      |      |  ~L2 |       | ~L2  |      |      |
                                `--------------------'       `--------------------'

Layer1: Fn, mouse, misc
,--------------------------------------------------.           ,--------------------------------------------------.
|        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  PrtSc |
|--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
|        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
|--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
|        |      |      |      |      |      |------|           |------|      |MsLClk|MsMClk|MsRClk|      |        |
|--------+------+------+------+------+------| Ins  |           |      |------+------+------+------+------+--------|
|        |      |      |      |      |      |      |           |      |      |ScrLft|ScrUp |ScrUp |ScrRgt|        |
`--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
  |      |      |      |      |      |                                       |MsLft | MsUp | MsDn |MsRgt |      |
  `----------------------------------'                                       `----------------------------------'
                                       ,-------------.       ,-------------.
                                       | MAC0 |      |       |      |      |
                                ,------|------|------|       |------+------+------.
                                |      |      |      |       |      |      |      |
                                |      |      |------|       |------|      |      |
                                |      |      |      |       |      |      |      |
                                `--------------------'       `--------------------'

Layer2: Flipped version of layer0
,--------------------------------------------------.           ,--------------------------------------------------.
|    /   |  0   |  9   |  8   |  7   |  6   |  F5  |           |  F4  |  5   |  4   |  3   |  2   |  1   |  Esc   |
|--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
|    =   |  L   |  R   |  C   |  G   |  F   |      |           |      |  Y   |  P   |  .   |  ,   |  '   |  Tab   |
|--------+------+------+------+------+------|  [   |           | LAlt |------+------+------+------+------+--------|
|    -   |  S   |  N   |  T   |  H   |  D   |------|           |------|  I   |  U   |  E   |  O   |  A   |        |
|--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
| RCtrl  |  Z   |  V   |  W   |  M   |  B   |  ]   |           | Del  |  X   |  K   |  J   |  Q   |  ;   | BkSp   |
`--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
  |  \   | Left |  Up  | Down | Right|                                       | Home | PgUp | PgDn  | End |  ~   |
  `----------------------------------'                                       `----------------------------------'
                                       ,-------------.       ,-------------.
                                       | LGui | App  |       |      |      |
                                ,------|------|------|       |------+------+------.
                                |      |      |RShift|       |      |      |      |
                                | Space| Enter|------|       |------|LCtrl |LShift|
                                |      |      |      |       |      |      |      |
                                `--------------------'       `--------------------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT_mcdoxDec2014(
    KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_F4   ,
    KC_TAB  , KC_QUOT , KC_COMM , KC_DOT  , KC_P    , KC_Y    , KC_LALT ,
    MO(1)   , KC_A    , KC_O    , KC_E    , KC_U    , KC_I    ,
    KC_BSPC , KC_SCLN , KC_Q    , KC_J    , KC_K    , KC_X    , KC_DEL  ,
    KC_GRV  , KC_HOME , KC_PGDN , KC_PGUP , KC_END  ,
                                                            KC_VOLU , KC_VOLD ,
                                                                      KC_MUTE ,
                                                  KC_LSFT , KC_LCTL , MO(2)   ,

          KC_F5   , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_SLSH ,
          KC_LBRC , KC_F    , KC_G    , KC_C    , KC_R    , KC_L    , KC_EQL  ,
                    KC_D    , KC_H    , KC_T    , KC_N    , KC_S    , KC_MINS ,
          KC_RBRC , KC_B    , KC_M    , KC_W    , KC_V    , KC_Z    , KC_RCTL ,
                              KC_LEFT , KC_UP   , KC_DOWN , KC_RGHT , KC_BSLS ,
    KC_APP  , KC_RGUI ,
    KC_RSFT ,
    MO(2)   , KC_ENT  , KC_SPC
  ),
  LAYOUT_mcdoxDec2014(
    _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,
    _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , _______ , _______ , _______ , _______ , _______ , KC_INS  ,
    _______ , _______ , _______ , _______ , _______ ,
                                                            KC_NO   , _______ ,
                                                                      _______ ,
                                                  _______ , _______ , KC_NO   ,

          KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_PSCR ,
          _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
                    _______ , KC_BTN1 , KC_BTN3 , KC_BTN2 , _______ , _______ ,
          _______ , _______ , KC_WH_L , KC_WH_U , KC_WH_D , KC_WH_R , _______ ,
                              KC_MS_L , KC_MS_U , KC_MS_D , KC_MS_R , _______ ,
    _______ , _______ ,
    _______ ,
    KC_NO   , _______ , _______
  ),
  LAYOUT_mcdoxDec2014(
    KC_SLSH , KC_0    , KC_9    , KC_8    , KC_7    , KC_6    , KC_F5   ,
    KC_EQL  , KC_L    , KC_R    , KC_C    , KC_G    , KC_F    , KC_LBRC ,
    KC_MINS , KC_S    , KC_N    , KC_T    , KC_H    , KC_D    ,
    KC_RCTL , KC_Z    , KC_V    , KC_W    , KC_M    , KC_B    , KC_RBRC ,
    KC_BSLS , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT ,
                                                            KC_LGUI , KC_MUTE ,
                                                                      KC_RSFT ,
                                                  KC_SPC  , KC_ENT  , _______ ,

          KC_F4   , KC_5    , KC_4    , KC_3    , KC_2    , KC_1    , KC_ESC  ,
          KC_LALT , KC_Y    , KC_P    , KC_DOT  , KC_COMM , KC_QUOT , KC_TAB  ,
                    KC_I    , KC_U    , KC_E    , KC_O    , KC_A    , _______ ,
          KC_DEL  , KC_X    , KC_K    , KC_J    , KC_Q    , KC_SCLN , KC_BSPC ,
                              KC_HOME , KC_UP   , KC_PGDN , KC_END  , KC_GRV  ,
    _______ , _______ ,
    _______ ,
    _______ , KC_LCTL , KC_LSFT
  )
  /*
  */
};


