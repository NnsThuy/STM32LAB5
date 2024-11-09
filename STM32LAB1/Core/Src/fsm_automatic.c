/*
 * Ex.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Song Thuy
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
    led7_run();
	switch(status_A){
	         case RED:
			 TurnOnRed_A();
				  if(isTimerExpired(0)==1){
					  status_A=GREEN;
					  setTimer(0, green*1000);
					  setTimer(3, 1000);
					  counterA=green;
				  }
				  if(isTimerExpired(3)==1){
					  setTimer(3, 1000);
					  counterA--;
				  }
				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case YELLOW:
			  TurnOnYellow_A();
					  if(isTimerExpired(0)==1){
					  status_A=RED;
					  setTimer(0, red*1000);
					  setTimer(3, 1000);
					  counterA=red;
				  }
				  if(isTimerExpired(3)==1){
					  setTimer(3, 1000);
					  counterA--;
				  }
				  if(isButtonPressed(0)==1){
					  status_A=manual_init;
					  status_B=manual_init;
				  }
				  break;
			  case GREEN:
			  TurnOnGreen_A();
				  if(isTimerExpired(0)==1){
					  status_A=YELLOW;
					  setTimer(0, yellow*1000);
					  setTimer(3, 1000);
					  counterA=yellow;
				  }
				  if(isTimerExpired(3)==1){
				  setTimer(3, 1000);
				  counterA--;
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
				  if(isTimerExpired(1)==1){
					  status_B=YELLOW;
					  setTimer(1, yellow*1000);
					  setTimer(4, 1000);
					  counterB=yellow;
				  }
				  if(isTimerExpired(4)==1){
					  setTimer(4, 1000);
					  counterB--;
					  }
				 			  break;
			  case RED:
			  TurnOnRed_B();
				  if(isTimerExpired(1)==1){
					  status_B=GREEN;
					  setTimer(1, green*1000);
					  setTimer(4, 1000);
					  counterB=green;
				  }
				  if(isTimerExpired(4)==1){
					  setTimer(4, 1000);
					  counterB--;
					  }

			 		  break;
			  case YELLOW:
			  TurnOnYellow_B();
				  if(isTimerExpired(1)==1){
					  status_B=RED;
					  setTimer(1, red*1000);
					  setTimer(4, 1000);
					  counterB=red;
				  }
				  if(isTimerExpired(4)){
					  setTimer(4, 1000);
					  counterB--;
					  }

	               break;
		  default:
			  break;
			  }
}

