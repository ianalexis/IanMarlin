/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
{ OV(  9), 320 },
{ OV(  10), 314 },
{ OV(  11), 309 },
{ OV(  12), 304 },
{ OV(  13), 300 },
{ OV(  14), 296 },
{ OV(  15), 292 },
{ OV(  16), 289 },
{ OV(  17), 285 },
{ OV(  18), 282 },
{ OV(  19), 280 },
{ OV(  20), 277 },
{ OV(  22), 272 },
{ OV(  23), 269 },
{ OV(  25), 265 },
{ OV(  27), 263 },
{ OV(  28), 260 },
{ OV(  31), 255 },
{ OV(  33), 250 },
{ OV(  35), 248 },
{ OV(  38), 243 },
{ OV(  41), 239 },
{ OV(  44), 235 },
{ OV(  48), 230 },
{ OV(  52), 225 },
{ OV(  56), 220 },
{ OV(  61), 217 },
{ OV(  66), 213 },
{ OV(  71), 209 },
{ OV(  78), 204 },
{ OV(  84), 200 },
{ OV(  92), 195 },
{ OV(  100), 190 },
{ OV(  109), 186 },
{ OV(  120), 181 },
{ OV(  131), 177 },
{ OV(  143), 173 },
{ OV(  156), 168 },
{ OV(  171), 162 },
{ OV(  187), 158 },
{ OV(  205), 154 },
{ OV(  224), 149 },
{ OV(  245), 145 },
{ OV(  268), 140 },
{ OV(  293), 135 },
{ OV(  320), 130 },
{ OV(  348), 125 },
{ OV(  379), 121 },
{ OV(  411), 116 },
{ OV(  445), 111 },
{ OV(  480), 106 },
{ OV(  516), 102 },
{ OV(  553), 97 },
{ OV(  591), 93 },
{ OV(  628), 88 },
{ OV(  665), 84 },
{ OV(  702), 79 },
{ OV(  737), 74 },
{ OV(  770), 69 },
{ OV(  801), 65 },
{ OV(  830), 60 },
{ OV(  857), 56 },
{ OV(  881), 51 },
{ OV(  903), 47 },
{ OV(  922), 42 },
{ OV(  939), 38 },
{ OV(  954), 33 },
{ OV(  966), 29 },
{ OV(  977), 25 },
{ OV(  985), 20 },
{ OV(  993), 15 },
{ OV(  999), 10 },
{ OV(  1004), 5 },
{ OV(  1008), 0 },
{ OV(  1012), -5 },
{ OV(  1016), -10 },
{ OV(  1020), -15 }
};
