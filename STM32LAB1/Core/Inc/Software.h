/*
 * Software.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */

#ifndef INC_SOFTWARE_H_
#define INC_SOFTWARE_H_

#include "main.h"

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_SOFTWARE_H_ */
