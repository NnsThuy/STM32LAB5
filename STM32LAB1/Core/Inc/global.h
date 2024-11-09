/*
 * global.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "Software.h"
#include "Led7_segment.h"
#include "Traffic_light.h"
#include "Button.h"
#define RED 5
#define GREEN 3
#define YELLOW 2

#define manual_init 10
#define manual_red 11
#define manual_green 12
#define manual_yellow 13

extern int counterA;
extern int counterB;
extern int status_A;
extern int status_B;
extern int led_buffer[4];
extern int man_red;
extern int man_green;
extern int man_yellow;
extern int red;
extern int green;
extern int yellow;
#endif /* INC_GLOBAL_H_ */
