/*
 * Ex.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Song Thuy
 */
#include "fsm_automatic.h"
int counterA_time=0;
int counterB_time=0;

void fsm_automatic_run(){
    led7_run();
    counterA_time++;
    counterB_time++;
	switch(status_A){
	         case RED:
			 TurnOnRed_A();
				  if(counterA_time>=RED){
					  status_A=GREEN;
					  counterA=GREEN;
					  counterA_time=0;
				  }


				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case YELLOW:
			  TurnOnYellow_A();
					  if(counterA_time>=YELLOW){
					  status_A=RED;
					  counterA=RED;
					  counterA_time=0;
				  }


				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case GREEN:
			  TurnOnGreen_A();
				  if(counterA_time>=GREEN){
					  status_A=YELLOW;
					  counterA=YELLOW;
					  counterA_time=0;
				  }

				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  default:
				  break;
			  }
		switch(status_B){
			  case GREEN:
			  TurnOnGreen_B();
				  if(counterB_time>=GREEN){
					  status_B=YELLOW;
					  counterB=YELLOW;
					  counterB_time=0;
				  }

				 break;
			  case RED:
			  TurnOnRed_B();
				  if(counterB_time>=RED){
					  status_B=GREEN;
					  counterB=GREEN;
					  counterB_time=0;
				  }

			 		  break;
			  case YELLOW:
			  TurnOnYellow_B();
				  if(counterB_time>=YELLOW){
					  status_B=RED;
					  counterB=RED;
					  counterB_time=0;
				  }

	               break;
		  default:
			  break;
			  }
		}

