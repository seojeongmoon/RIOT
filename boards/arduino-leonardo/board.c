/*
 * Copyright (C)  2017 Thomas Perrot <thomas.perrot@tupi.fr>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_arduino-leonardo
 * @{
 *
 * @file
 * @brief       Board specific initialization for Arduino Leonardo
 *
 * @author      Thomas Perrot <thomas.perrot@tupi.fr>
 *
 * @}
 */

#include "board.h"
#include "cpu.h"

void led_init(void);

void board_init(void)
{
    avr8_stdio_init();
    cpu_init();
    led_init();
}
