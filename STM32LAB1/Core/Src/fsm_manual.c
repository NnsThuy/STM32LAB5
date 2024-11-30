/*
 * fsm_manual.c
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */


#include "fsm_manual.h"
int counter_led=0;
void fsm_manual_run(){
	switch(status_A){
			case manual_init:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);

				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);


					status_A = manual_red;



				break;
		    case manual_red:
				 counterA=1;
				 counterB=man_red;


				  HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
				  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
				  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);

				  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
				  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
				  HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);

				  if(isButtonPressed(0)==1){
					  status_A=manual_yellow;
				  }
				if(isButtonPressed(1)==1){
					  man_red++;
				  }

				if(isButtonPressed(2)==1){
					  red=man_red;
					  man_red=0;
				  }
					  break;
			case manual_yellow:
				  counterA=2;
				 counterB=man_yellow;



				  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
				  HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
				  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);

				  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
				  HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
				  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);


				 if(isButtonPressed(0)==1){
					  status_A=manual_green;
				  }
				  if(isButtonPressed(1)==1){
					  man_yellow++;
				  }
				  if(isButtonPressed(2)==1){
					  yellow=man_yellow;
					  man_yellow=0;
				  }


					  break;
		   case manual_green:
				  counterA=3;
				 counterB=man_green;


				  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
				  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
				  HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);

				  HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
				  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
				  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);


				  if(isButtonPressed(0)==1){
					  if(red>(green+yellow)){
						green+=red-(green+yellow);
					}

					if(red<(green+yellow)){
						red+=(green+yellow)-red;
					}
					  status_A=RED;
					  status_B=GREEN;
					  counterA = red;
					  counterB = green;



				  }
				  if(isButtonPressed(1)==1){
					  man_green++;
				  }
				  if(isButtonPressed(2)==1){
					  green=man_green;
					  man_green=0;
				  }

					  break;
				  default:

					  break;
				  }
}
