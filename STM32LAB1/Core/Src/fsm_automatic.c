/*
 * Ex.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Song Thuy
 */
#include "fsm_automatic.h"
int counterA_time=0;
int counterB_time=0;
void initialize() {
    counterA = red;
    counterB = green;
}
void update_buffer(){
	counterA--;
	counterB--;
//	counterA_time++;
//	counterB_time++;
}
void fsm_automatic_run(){
    //led7_run();

	switch(status_A){
	         case RED:
			 TurnOnRed_A();
				  if(counterA<=0){
					  status_A=GREEN;
					  counterA=green;
					  //counterA_time=0;
				  }


				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case YELLOW:
			  TurnOnYellow_A();
					  if(counterA<=0){
					  status_A=RED;
					  counterA=red;
					  //counterA_time=0;
				  }


				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case GREEN:
			  TurnOnGreen_A();
				  if(counterA<=0){
					  status_A=YELLOW;
					  counterA=yellow;
					  //counterA_time=0;
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
				  if(counterB<=0){
					  status_B=YELLOW;
					  counterB=yellow;
					  //counterB_time=0;
				  }

				 break;
			  case RED:
			  TurnOnRed_B();
				  if(counterB<=0){
					  status_B=GREEN;
					  counterB=green;
					  //counterB_time=0;
				  }

			 		  break;
			  case YELLOW:
			  TurnOnYellow_B();
				  if(counterB<=0){
					  status_B=RED;
					  counterB=red;
					  //counterB_time=0;
				  }

	               break;
		  default:
			  break;
			  }
		}

