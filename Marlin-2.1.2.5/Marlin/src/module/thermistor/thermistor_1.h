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
// Modificado, SUB 110 = ORIGINAL para BED, POS 110 = MODIFICADO para END
// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
  { OV(   1), 601 },
  { OV(   2), 506 },
  { OV(   3), 458 },
  { OV(   4), 426 },
  { OV(   5), 404 },
  { OV(   9), 349 },
  { OV(  10), 340 },
  { OV(  11), 332 },
  { OV(  12), 325 },
  { OV(  13), 319 },
  { OV(  14), 313 },
  { OV(  15), 308 },
  { OV(  16), 301 },
  { OV(  17), 296 },
  { OV(  18), 293 },
  { OV(  19), 290 },
  { OV(  20), 286 },
  { OV(  22), 280 },
  { OV(  23), 275 },
  { OV(  25), 270 },
  { OV(  27), 267 },
  { OV(  28), 264 },
  { OV(  31), 259 },
  { OV(  33), 254 },
  { OV(  35), 250 },
  { OV(  38), 246 },
  { OV(  41), 242 },
  { OV(  44), 237 },
  { OV(  48), 233 },
  { OV(  52), 228 },
  { OV(  56), 224 },
  { OV(  61), 219 },
  { OV(  66), 215 },
  { OV(  71), 211 },
  { OV(  78), 207 },
  { OV(  84), 202 },
  { OV(  92), 198 },
  { OV( 100), 193 },
  { OV( 109), 189 },
  { OV( 120), 184 },
  { OV( 131), 180 },
  { OV( 143), 176 },
  { OV( 156), 171 },
  { OV( 171), 168 },
  { OV( 187), 165 },
  { OV( 205), 160 },
  { OV( 224), 157 },
  { OV( 245), 152 },
  { OV( 268), 147 },
  { OV( 293), 142 },
  { OV( 320), 137 },
  { OV( 348), 133 },
  { OV( 379), 127 },
  { OV( 411), 122 },
  { OV( 445), 117 },
  { OV( 480), 112 },
  { OV( 516), 108 },
  { OV( 553), 105 },
  { OV( 591), 100 },
  { OV( 628),  95 },
  { OV( 665),  90 },
  { OV( 702),  85 },
  { OV( 737),  80 },
  { OV( 770),  75 },
  { OV( 801),  70 },
  { OV( 830),  65 },
  { OV( 857),  60 },
  { OV( 881),  55 },
  { OV( 903),  50 },
  { OV( 922),  45 },
  { OV( 939),  40 },
  { OV( 954),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};