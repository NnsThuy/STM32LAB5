/*
 * Button.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */


#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "fsm_automatic.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define MAX_BUTTON 3

extern int button_flag[MAX_BUTTON];
extern int KeyReg0[MAX_BUTTON];
extern int KeyReg0[MAX_BUTTON];
extern int KeyReg0[MAX_BUTTON];
extern int KeyReg0[MAX_BUTTON];

int isButtonPressed(int index);
void getKeyInput();


#endif /* INC_BUTTON_H_ */

