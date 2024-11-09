/*
 * Led7_segment.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"

#include "fsm_automatic.h"
#include "global.h"

void init_led7();
void led7_run();

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_LED7_SEGMENT_H_ */
