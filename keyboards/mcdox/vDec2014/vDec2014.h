
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
Visual layout has left fingers, then left thumbs, then right fingers, then
right thumbs.
Logical layout has 14 rows, 6 columns.
These differences are influenced by PCB design:
1. Ordering 2x half-size reversible PCBs costs less than either 1x full-size or
  2x different PCBs.
  The mirrored layout keeps fabrication cost down.
2. This single pre-processor macro costs no instruction memory.
Similarly to the Ergodox, rows and columns are swapped because the TMK port was
created before QMK existed, in particular the ROW2COL/COL2ROW define.
*/
#define LAYOUT_mcdoxDec2014(                                                  \
  c0r0L,  c0r1L,  c0r2L,  c0r3L,  c0r4L,  c0r5L,  c0r6L,                      \
  c1r0L,  c1r1L,  c1r2L,  c1r3L,  c1r4L,  c1r5L,  c1r6L,                      \
  c2r0L,  c2r1L,  c2r2L,  c2r3L,  c2r4L,  c2r5L,                              \
  c3r0L,  c3r1L,  c3r2L,  c3r3L,  c3r4L,  c3r5L,  c3r6L,                      \
  c4r0L,  c4r1L,  c4r2L,  c4r3L,  c4r4L,                                      \
                                                          c5r5L,  c5r6L,      \
                                                                  c5r4L,      \
                                                  c5r3L,  c5r2L,  c5r1L,      \
                                                                              \
                        c0r6R,  c0r5R,  c0r4R,  c0r3R,  c0r2R,  c0r1R,  c0r0R,\
                        c1r6R,  c1r5R,  c1r4R,  c1r3R,  c1r2R,  c1r1R,  c1r0R,\
                                c2r5R,  c2r4R,  c2r3R,  c2r2R,  c2r1R,  c2r0R,\
                        c3r6R,  c3r5R,  c3r4R,  c3r3R,  c3r2R,  c3r1R,  c3r0R,\
                                        c4r4R,  c4r3R,  c4r2R,  c4r1R,  c4r0R,\
        c5r6R,  c5r5R,                                                        \
        c5r4R,                                                                \
        c5r1R,  c5r2R,  c5r3R                                                 \
  ) {                                                                         \
    { c0r0L,  c1r0L,  c2r0L,  c3r0L,  c4r0L,  KC_NO },                        \
    { c0r1L,  c1r1L,  c2r1L,  c3r1L,  c4r1L,  c5r1L },                        \
    { c0r2L,  c1r2L,  c2r2L,  c3r2L,  c4r2L,  c5r2L },                        \
    { c0r3L,  c1r3L,  c2r3L,  c3r3L,  c4r3L,  c5r3L },                        \
    { c0r4L,  c1r4L,  c2r4L,  c3r4L,  c4r4L,  c5r4L },                        \
    { c0r5L,  c1r5L,  c2r5L,  c3r5L,  KC_NO,  c5r5L },                        \
    { c0r6L,  c1r6L,  KC_NO,  c3r6L,  KC_NO,  c5r6L },                        \
    { c0r6R,  c1r6R,  KC_NO,  c3r6R,  KC_NO,  c5r6R },                        \
    { c0r5R,  c1r5R,  c2r5R,  c3r5R,  KC_NO,  c5r5R },                        \
    { c0r4R,  c1r4R,  c2r4R,  c3r4R,  c4r4R,  c5r4R },                        \
    { c0r3R,  c1r3R,  c2r3R,  c3r3R,  c4r3R,  c5r3R },                        \
    { c0r2R,  c1r2R,  c2r2R,  c3r2R,  c4r2R,  c5r2R },                        \
    { c0r1R,  c1r1R,  c2r1R,  c3r1R,  c4r1R,  c5r1R },                        \
    { c0r0R,  c1r0R,  c2r0R,  c3r0R,  c4r0R,  KC_NO }                         \
  }
