#pragma once
// clang-format off

/*
    3axis_v4.h
    4axis_Arduino_CNC_Shield_grbl_09.h

    Pin assignments for the ESP32 Development Controller, v4.1 and later.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    for "Arduino CNC Shield v3.1~3.5x (Grbl 0.9x or higher)" with "waves ESP32 ESPDuino-32"
    https://blog.protoneer.co.nz/arduino-cnc-shield/
    https://github.com/grbl/grbl/wiki/Connecting-Grbl

    2018    - Bart Dring
    2020    - Mitch Bradley
    2021    - ESI

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME            "ESP32_V4"

#define X_STEP_PIN              GPIO_NUM_26  //  D2 of the CNC Shield
#define X_DIRECTION_PIN         GPIO_NUM_16  //  D5 of the CNC Shield
#define Y_STEP_PIN              GPIO_NUM_25  //  D3 of the CNC Shield
#define Y_DIRECTION_PIN         GPIO_NUM_27  //  D6 of the CNC Shield
#define Z_STEP_PIN              GPIO_NUM_17  //  D4 of the CNC Shield
#define Z_DIRECTION_PIN         GPIO_NUM_14  //  D7 of the CNC Shield
#define A_STEP_PIN              GPIO_NUM_23  // D11 of the CNC Shield
#define A_DIRECTION_PIN         GPIO_NUM_18  // D13 of the CNC Shield

#define X_LIMIT_PIN             GPIO_NUM_13  //  D9 of the CNC Shield
#define Y_LIMIT_PIN             GPIO_NUM_5   // D10 of the CNC Shield
#define Z_LIMIT_PIN             GPIO_NUM_19  // D12 of the CNC Shield
#define A_LIMIT_PIN             GPIO_NUM_34  //  A3 of the CNC Shield


// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_12  //  D8 of the CNC Shield

//#define SPINDLE_TYPE            SpindleType::PWM
//#define SPINDLE_OUTPUT_PIN      GPIO_NUM_18  // labeled SpinPWM
//#define SPINDLE_ENABLE_PIN      GPIO_NUM_19  // labeled SpinEnbl

//#define COOLANT_MIST_PIN        GPIO_NUM_21  // labeled Mist
//#define COOLANT_FLOOD_PIN       GPIO_NUM_34  // labeled Flood
#define PROBE_PIN               GPIO_NUM_39  // labeled Probe, A5 of the CNC Shield

//#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_2   // labeled Reset, needs external pullup, A0
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_4   // labeled Hold,  needs external pullup, A1
#define CONTROL_CYCLE_START_PIN GPIO_NUM_35  // labeled Start, needs external pullup, A2
