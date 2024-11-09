/*
 * Button.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Song Thuy
 */


#include "button.h"
#include "fsm_automatic.h"
#include "Software.h"

int KeyReg0[MAX_BUTTON]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[MAX_BUTTON]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[MAX_BUTTON]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[MAX_BUTTON]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress =  500;

int button_flag[MAX_BUTTON]={0, 0, 0};

int isButtonPressed(int index){
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}


void getKeyInput(){
	for(int i=0;i<MAX_BUTTON; i++){
		KeyReg2[i] = KeyReg1[i];
		  KeyReg1[i] = KeyReg0[i];
		  KeyReg0[0] = HAL_GPIO_ReadPin(BUTTON0_GPIO_Port, BUTTON0_Pin);
		  KeyReg0[1] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
		  KeyReg0[2] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);

  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
    if (KeyReg2[i] != KeyReg3[i]){
      KeyReg3[i] = KeyReg2[i];

      if (KeyReg3[i] == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        //subKeyProcess();
        button_flag[i] = 1;
      }

    }else{
        TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
        	TimeOutForKeyPress = 500;
        	if (KeyReg3[i] == PRESSED_STATE){
        		//subKeyProcess();
        		button_flag[i] = 1;
        	}
        }
    }
  }
 }
}
