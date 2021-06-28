
# mcdoxNov2020

# Copyright 2020 Dave McEwan <cogitocumimpune@hotmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

MCU = atmega32u4
BOOTLOADER = halfkay
F_CPU = 16000000

###############################################################################
# Set these variables to no to disable them, and yes to enable them.
# https://docs.qmk.fm/#/getting_started_make_guide
###############################################################################

# EXTRAKEY_ENABLE
# This allows you to use the system and audio control key codes.
EXTRAKEY_ENABLE = yes

# CONSOLE_ENABLE
# This allows you to print messages that can be read using hid_listen.
# By default, all debug (dprint) print (print, xprintf), and user print
# (uprint) messages will be enabled.
# This will eat up a significant portion of the flash and may make the keyboard
# .hex file too big to program.
#
# To disable debug messages (`dprint`) and reduce the `.hex` file size, include
# `#define NO_DEBUG` in your `config.h` file.
#
# To disable print messages (`print`, `xprintf`) and user print messages
# (`uprint`) and reduce the .hex file size, include `#define NO_PRINT` in your
# `config.h` file.
#
# To disable print messages (`print`, `xprintf`) and KEEP user print messages
# (`uprint`), include `#define USER_PRINT` in your `config.h` file (do not also
# include `#define NO_PRINT` in this case).
#
# To see the text, open hid_listen and enjoy looking at your printed messages.
# https://www.pjrc.com/teensy/hid_listen.html
#
# NOTE: Do not include uprint messages in anything other than your keymap code.
# It must not be used within the QMK system framework.
# Otherwise, you will bloat other people's .hex files.
CONSOLE_ENABLE = no

# NKRO_ENABLE
# This allows the keyboard to tell the host OS that up to 248 keys are held
# down at once (default without NKRO is 6).
# NKRO is off by default, even if NKRO_ENABLE is set.
# NKRO can be forced by adding `#define FORCE_NKRO` to your `config.h` or by
# binding `MAGIC_TOGGLE_NKRO` to a key and then hitting the key.
# https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no


###############################################################################
# Advanced Keycodes
###############################################################################

# MOUSEKEY_ENABLE
# https://docs.qmk.fm/#/feature_mouse_keys
# Mouse keys is a feature that allows you to emulate a mouse using your
# keyboard.
# You can move the pointer at different speeds, press 5 buttons and scroll in
# 8 directions.
MOUSEKEY_ENABLE = yes

# COMMAND_ENABLE
# https://docs.qmk.fm/#/feature_command
# This enables magic commands, typically fired with the default magic key combo
# (LSHIFT+RSHIFT+KEY).
# Magic commands include turning on debugging messages (MAGIC+D) or temporarily
# toggling NKRO (MAGIC+N).
COMMAND_ENABLE = no


###############################################################################
# Software Features
###############################################################################

# DEBOUNCE_TYPE
# https://docs.qmk.fm/#/feature_debounce_type
# - `sym_defer_g` - Debouncing per keyboard.
#		On any state change, a global timer is set.
#		When `DEBOUNCE` milliseconds of no changes has occurred, all input changes
#		are pushed.
#		This is the current default algorithm.
#   This is the highest performance
#		algorithm with lowest memory usage, and it's also noise-resistant.
# - `sym_eager_pr` - Debouncing per row.
#		On any state change, response is immediate, followed by locking the row
#		`DEBOUNCE` milliseconds of no further input for that row.
#		For use in keyboards where refreshing `NUM_KEYS` 8-bit counters is
#		computationally expensive / low scan rate, and fingers usually only hit one
#		row at a time.
#		This could be appropriate for the ErgoDox models; the matrix is rotated
#		90 degrees, and hence its "rows" are really columns, and each finger only
#		hits a single "row" at a time in normal use.
#	- `sym_eager_pk` - Debouncing per key.
#		On any state change, response is immediate, followed by `DEBOUNCE`
#		milliseconds of no further input for that key.
# - `sym_defer_pk` - Debouncing per key.
#		On any state change, a per-key timer is set.
#		When `DEBOUNCE` milliseconds of no changes have occurred on that key, the
#		key status change is pushed.
DEBOUNCE_TYPE = sym_defer_g

# KEY_LOCK_ENABLE
# https://docs.qmk.fm/#/feature_key_lock
# Sometimes you may find yourself needing to hold down a specific key for a
# long period of time.
# Key Lock holds down the next key you press for you; Press it again, and it
# will be released.
#
# Let's say you need to type in ALL CAPS for a few sentences.
# Hit `KC_LOCK`, then `Shift`; Now `Shift` will be considered held until you
# tap it again.
KEY_LOCK_ENABLE = no

# RAW_ENABLE
# https://docs.qmk.fm/#/feature_rawhid
# Raw HID allows for bidirectional communication between QMK and the host
# computer over an HID interface.
RAW_ENABLE = no

# SEQUENCER_ENABLE
# https://docs.qmk.fm/#/feature_sequencer
# QMK has experimental support for MIDI, you can now turn your keyboard into a
# step sequencer.
# https://en.wikipedia.org/wiki/Music_sequencer#Step_sequencers
SEQUENCER_ENABLE = no


###############################################################################
# Hardware Features
###############################################################################

# OLED_DRIVER_ENABLE
# https://docs.qmk.fm/#/feature_oled_driver
OLED_DRIVER_ENABLE = no

# BACKLIGHT_ENABLE
# https://docs.qmk.fm/#/feature_backlight
BACKLIGHT_ENABLE = no

# SLEEP_LED_ENABLE
# Enables your LED to breath while your computer is sleeping.
# Timer1 is being used here.
# This feature is largely unused and untested, and needs updating/abstracting.
SLEEP_LED_ENABLE = no

# RGBLIGHT_ENABLE
# https://docs.qmk.fm/#/feature_rgblight
RGBLIGHT_ENABLE = no

# AUDIO_ENABLE
# https://docs.qmk.fm/#/feature_audio
# This allows you output audio on the C6 pin (needs abstracting).
AUDIO_ENABLE = no

# BLUETOOTH
# https://docs.qmk.fm/#/feature_bluetooth
BLUETOOTH_ENABLE = no

# BOOTMAGIC_ENABLE
# https://docs.qmk.fm/#/feature_bootmagic
# This allows you to hold a key and the salt key (space by default) and have
# access to a various EEPROM settings that persist over power loss.
# It's advised you keep this disabled, as the settings are often changed by
# accident, and produce confusing results that makes it difficult to debug.
# It's one of the more common problems encountered in help sessions.
BOOTMAGIC_ENABLE = no

# DIP_SWITCH_ENABLE
# https://docs.qmk.fm/#/feature_dip_switch
DIP_SWITCH_ENABLE = no

# ENCODER_ENABLE
# https://docs.qmk.fm/#/feature_encoders
ENCODER_ENABLE = no

# MIDI_ENABLE
# https://docs.qmk.fm/#/feature_midi
MIDI_ENABLE = no

# STENO_ENABLE
# https://docs.qmk.fm/#/feature_stenography
STENO_ENABLE = no

# VELOCIKEY_ENABLE
# https://docs.qmk.fm/#/feature_velocikey
# Velocikey is a feature that lets you control the speed of lighting effects
# (like the Rainbow Swirl effect) with the speed of your typing.
VELOCIKEY_ENABLE = no

