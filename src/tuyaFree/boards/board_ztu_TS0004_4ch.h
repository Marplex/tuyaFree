/********************************************************************************************************
 * @file    board_ztu_TS0004_4ch.h
 *
 * @brief   This is the header file for board_ztu_TS0004_4ch (mini zigbee in-wall 4gang switch TZ3000)
 *
 *
 * @author  Zigbee Group
 * @date    2021
 *
 * @par     Copyright (c) 2021, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *			All rights reserved.
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/

#pragma once

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

#define CLOCK_SYS_CLOCK_HZ  		48000000

/*
 * Reverse engineered ports
 * D2 -> Switch1
 * C3 -> Switch2
 * C2 -> Switch3
 * C1 -> Switch4
 *
 * B1 -> LED
 *
 * B7 -> Relay1
 * B5 -> Relay2
 * B4 -> Relay3
 * C4 -> Relay4
 */

// Network key button
#define	BUTTON1 					GPIO_PC0
#define PC0_FUNC					AS_GPIO
#define PC0_OUTPUT_ENABLE			0
#define PC0_INPUT_ENABLE			1
//#define	PULL_WAKEUP_SRC_PC0			PM_PIN_PULLUP_10K				pull-up is on board
#define	BUTTON1_PM_WAKEUP_LEVEL		PM_WAKEUP_LEVEL_LOW

//Switches (4-gang model, pull-up on board)
#define SWITCH1						GPIO_PD2
#define PD2_FUNC					AS_GPIO
#define PD2_OUTPUT_ENABLE			0
#define PD2_INPUT_ENABLE			1
#define	PD2_PM_WAKEUP_LEVEL			PM_WAKEUP_LEVEL_LOW

#define SWITCH2						GPIO_PC3
#define PC3_FUNC					AS_GPIO
#define PC3_OUTPUT_ENABLE			0
#define PC3_INPUT_ENABLE			1
#define	PC3_PM_WAKEUP_LEVEL			PM_WAKEUP_LEVEL_LOW

#define SWITCH3						GPIO_PC2
#define C2_FUNC						AS_GPIO
#define C2_OUTPUT_ENABLE			0
#define C2_INPUT_ENABLE				1
#define	C2_PM_WAKEUP_LEVEL			PM_WAKEUP_LEVEL_LOW

#define SWITCH4						GPIO_PC1
#define PC1_FUNC					AS_GPIO
#define PC1_OUTPUT_ENABLE			0
#define PC1_INPUT_ENABLE			1
#define	PC1_PM_WAKEUP_LEVEL			PM_WAKEUP_LEVEL_LOW

// LED
#define LED1     					GPIO_PB1
#define PB4_FUNC					AS_GPIO
#define PB4_OUTPUT_ENABLE			1
#define PB4_INPUT_ENABLE			0

#define LED_POWER					LED1
#define	PM_WAKEUP_LEVEL		  		PM_WAKEUP_LEVEL_LOW

//Relays (4-gang model)
#define RELAY1						GPIO_PB7
#define PB7_FUNC					AS_GPIO
#define PB7_OUTPUT_ENABLE			1
#define PB7_INPUT_ENABLE			0

#define RELAY2						GPIO_PB5
#define PB5_FUNC					AS_GPIO
#define PB5_OUTPUT_ENABLE			1
#define PB5_INPUT_ENABLE			0

#define RELAY3						GPIO_PB4
#define PB4_FUNC					AS_GPIO
#define PB4_OUTPUT_ENABLE			1
#define PB4_INPUT_ENABLE			0

#define RELAY4						GPIO_PC4
#define PC4_FUNC					AS_GPIO
#define PC4_OUTPUT_ENABLE			1
#define PC4_INPUT_ENABLE			0

// UART
#if ZBHCI_UART
	#error please configurate uart PIN!!!!!!
#endif

// DEBUG
#if UART_PRINTF_MODE
	#define	DEBUG_INFO_TX_PIN	    GPIO_PC7//print
#endif


enum{
	VK_SW1 = 0x01
};

#define	KB_MAP_NORMAL	{\
		{VK_SW1,}, }

#define	KB_MAP_NUM		KB_MAP_NORMAL
#define	KB_MAP_FN		KB_MAP_NORMAL

#define KB_DRIVE_PINS  {NULL }
#define KB_SCAN_PINS   {BUTTON1}


/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
