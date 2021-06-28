
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

#pragma once

#include "quantum.h"

/** Map from visual position (c<col>r<row>) to logical position in matrix.
Visual layout in keymap.c has 2 times 5 rows by 8 colunms.
Logical layout has 10 rows, 8 columns.
These differences are influenced by PCB design:
1. Having the number of rows as close as possible to the number of colunms
  reduces the number of GPIO pins required.
  E.g. 5x16 requires 5+16=21 pins, doesn't fit on Pro Micro
       10x8 requires 10+8=18 pins, fits on Pro Micro
2. Ordering 2x half-size reversible PCBs costs less than either 1x full-size or
  2x different PCBs.
  The mirrored layout keeps fabrication cost down.
3. This single pre-processor macro costs no instruction memory.
*/
#define LAYOUT_mcdoxNov2020(                                                  \
  c0r0, c1r0, c2r0, c3r0, c4r0, c5r0, c6r0,                                   \
  c0r1, c1r1, c2r1, c3r1, c4r1, c5r1, c6r1,                                   \
  c0r2, c1r2, c2r2, c3r2, c4r2, c5r2, c6r2,                                   \
  c0r3, c1r3, c2r3, c3r3, c4r3, c5r3,   c6r3, c7r3,                           \
  c0r4, c1r4, c2r4, c3r4, c4r4,   c5r4, c6r4, c7r4,                           \
                                                                              \
          c6r9, c5r9, c4r9, c3r9, c2r9, c1r9, c0r9,                           \
          c6r8, c5r8, c4r8, c3r8, c2r8, c1r8, c0r8,                           \
          c6r7, c5r7, c4r7, c3r7, c2r7, c1r7, c0r7,                           \
  c7r6, c6r6,   c5r6, c4r6, c3r6, c2r6, c1r6, c0r6,                           \
  c7r5, c6r5,c5r5,    c4r5, c3r5, c2r5, c1r5, c0r5)                           \
 {                                                                            \
  {c0r9, c1r9, c2r9, c3r9, c4r9, c5r9, c6r9, KC_NO},                          \
  {c0r8, c1r8, c2r8, c3r8, c4r8, c5r8, c6r8, KC_NO},                          \
  {c0r7, c1r7, c2r7, c3r7, c4r7, c5r7, c6r7, KC_NO},                          \
  {c0r6, c1r6, c2r6, c3r6, c4r6, c5r6, c6r6, c7r6},                           \
  {c0r5, c1r5, c2r5, c3r5, c4r5, c5r5, c6r5, c7r5},                           \
  {c0r4, c1r4, c2r4, c3r4, c4r4, c5r4, c6r4, c7r4},                           \
  {c0r3, c1r3, c2r3, c3r3, c4r3, c5r3, c6r3, c7r3},                           \
  {c0r2, c1r2, c2r2, c3r2, c4r2, c5r2, c6r2, KC_NO},                          \
  {c0r1, c1r1, c2r1, c3r1, c4r1, c5r1, c6r1, KC_NO},                          \
  {c0r0, c1r0, c2r0, c3r0, c4r0, c5r0, c6r0, KC_NO}                           \
 }
