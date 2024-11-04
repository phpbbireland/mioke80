/* Copyright (C) 2022 jonylee@hfd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

//#include <ws2812.h>

#define USB_POLLING_INTERVAL_MS 1
#define WAIT_FOR_USB

#define MATRIX_ROWS 10
#define MATRIX_COLS 10


/*
#define RGB_TRIGGER_ON_KEYDOWN

#define WS2812_DI_PIN A1



#define WS2812_LED_COUNT 99
#define WS2812_TIMING	1250
#define WS2812_T1H	900
#define WS2812_T0H	350
#define WS2812_TRST_US	280
#define WS2812_RGBW true                             // Enables RGBW support (except i2c driver)
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB      // WS2812B-2020

*/

/*
#define RGBLIGHT_LED_COUNT 99
#define RGBLIGHT_HUE_STEP	8
#define RGBLIGHT_SAT_STEP	17
#define RGBLIGHT_VAL_STEP	17
#define RGBLIGHT_LIMIT_VAL	255
#define RGBLIGHT_SLEEP true
#define RGBLIGHT_MAX_LAYERS 4

*/
// compiled ok 30/09/2024


/*
	https://docs.qmk.fm/drivers/eeprom

	SPI Driver Configuration
	Currently QMK supports 25xx-series chips over SPI. As such, requires a working spi_master driver configuration.
	You can override the driver configuration via your config.h:

#define SPI_DRIVER                           SPID1
#define SPI_SCK_PIN                          A5
#define SPI_SCK_PAL_MODE                     5
#define SPI_MOSI_PIN                         A7
#define SPI_MOSI_PAL_MODE                    5
#define SPI_MISO_PIN                         A6
#define SPI_MISO_PAL_MODE                    5

#define EXTERNAL_EEPROM_SPI_SLAVE_SELECT_PIN A4
#define EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR    64

#define STM32_ONBOARD_EEPROM_SIZE
#define EXTERNAL_EEPROM_BYTE_COUNT           8192
#define EXTERNAL_EEPROM_PAGE_SIZE	         32
#define EXTERNAL_EEPROM_ADDRESS_SIZE	     2


*/
