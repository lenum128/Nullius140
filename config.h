// Copyright 2024 lenum128
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define LAYER_STATE_16BIT


#ifdef OLED_ENABLE
    #define I2C1_SCL_PIN        GP23
    #define I2C1_SDA_PIN        GP22
    #define I2C_DRIVER I2CD1
    #define OLED_DISPLAY_128x32  
#endif

// #define NUM_ENCODERS 3
#define NUM_DIRECTIONS 2
