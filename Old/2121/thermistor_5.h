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

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
constexpr temp_entry_t temptable_5[] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 330 }, // top rating 300C TITAN BOREAL EDITION v1
  { OV(  20), 315 },
  { OV(  23), 302 },
  { OV(  27), 288 },
  { OV(  31), 276 },
  { OV(  37), 265 },
  { OV(  43), 255 },
  { OV(  51), 244 },
  { OV(  61), 233 },
  { OV(  73), 221 },
  { OV(  87), 210 },
  { OV( 106), 198 },
  { OV( 128), 187 },
  { OV( 155), 175 },
  { OV( 189), 165 },
  { OV( 230), 155 },
  { OV( 278), 145 },
  { OV( 336), 135 },
  { OV( 402), 125 },
  { OV( 476), 113 },
  { OV( 554), 103 },
  { OV( 635),  95 },
  { OV( 713),  84 },
  { OV( 784),  73 },
  { OV( 846),  62 },
  { OV( 897),  51 },
  { OV( 937),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
