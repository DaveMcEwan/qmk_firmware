
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
/* https://beta.docs.qmk.fm/developing-qmk/qmk-reference/config_options */

#pragma once

#include "config_common.h"


/** Hardware Options
https://f055.io/
https://pid.codes/pids/
https://raw.githubusercontent.com/openmoko/openmoko-usb-oui/master/usb_product_ids.psv
*/
#define VENDOR_ID       0xf055
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    DaveMcEwan
#define PRODUCT         mcdoxDec2014

#define MATRIX_ROWS 14
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { B4, F7, F6, F5, F4, F1, F0, B0, B1, B2, B3, B7, D0, D1 }
#define MATRIX_COL_PINS { D4, D5, C7, C6, D3, D2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* https://docs.qmk.fm/#/feature_debounce_type */
#define DEBOUNCE 5


/** LED Indicators
https://docs.qmk.fm/#/feature_led_indicators
QMK provides methods to read 5 of the LEDs defined in the HID spec:
1. Num Lock
2. Caps Lock
3. Scroll Lock
4. Compose
5. Kana

There are three ways to get the lock LED state:
1. Specifying configuration options within config.h
2. Implementing `bool led_update_kb(led_t led_state)`
   or `_user(led_t led_state)`
3. Calling `led_t host_keyboard_led_state()`

Define                Default       Description
LED_NUM_LOCK_PIN      Not defined   The pin that controls the Num Lock LED.
LED_CAPS_LOCK_PIN     Not defined   The pin that controls the Caps Lock LED.
LED_SCROLL_LOCK_PIN   Not defined   The pin that controls the Scroll Lock LED.
LED_COMPOSE_PIN       Not defined   The pin that controls the Compose LED.
LED_KANA_PIN          Not defined   The pin that controls the Kana LED.
LED_PIN_ON_STATE      1             State of the indicator pins when the LED
                                    is "on" - 1 for high, 0 for low.

mcdoxNov2020 has no user-controllable LEDs on handBrd, but there is a
permanently-on LED available on each side of each hand.
mcdoxNov2020 has 2 LEDs on the ProMicro which aren't useful for normal usage
because they don't face the user, but may be useful for debug.
*/

/** Features That Can Be Disabled
NO_DEBUG - Disable debugging.
NO_PRINT - Disable printing/debugging using hid_listen.
NO_ACTION_LAYER - Disable layers.
NO_ACTION_TAPPING - Disable tap-dance and other tapping features.
NO_ACTION_ONESHOT - Disable one-shot modifiers.
NO_ACTION_MACRO - Disable old-style macro handling using `MACRO` or
  `action_get_macro()`. (deprecated)
NO_ACTION_FUNCTION - Disable old-style function handling using `fn_actions` or
  `action_function()`. (deprecated)
*/

/** Features That Can Be Enabled
FORCE_NKRO - NKRO by default requires to be turned on.
  This forces it on during keyboard startup regardless of EEPROM setting.
  NKRO can still be turned off but will be turned on again if the keyboard
  reboots.
STRICT_LAYER_RELEASE - Force a key release to be evaluated using the current
  layer stack instead of remembering which layer it came from.
  Used for advanced cases.
*/

