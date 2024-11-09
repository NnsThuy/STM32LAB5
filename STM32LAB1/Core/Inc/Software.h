/*
 * Software.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */

#ifndef INC_SOFTWARE_H_
#define INC_SOFTWARE_H_

#include "main.h"
extern int timerFlag[10];
int isTimerExpired(int index);
void setTimer(int index, int counter);
void timeRun();

#endif /* INC_SOFTWARE_H_ */
