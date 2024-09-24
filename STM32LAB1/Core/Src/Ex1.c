/*
 * Ex1.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Song Thuy
 */

#include "Ex1.h"


void init_Ex1(){
	  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
      HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
}


void display7SEG(int num){
	switch(num){
				  case 0:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  break;
				  case 1:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  break;
				  case 2:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 3:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 4:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 5:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 6:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 7:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  break;
				  case 8:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  case 9:
					  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  break;
				  default:
				      break;
			}
}

const unsigned int MAX_LED = 4;
int led_buffer[2] = {1, 2};
int index_led7seg=0;
void update7SEG(){
	switch (index_led7seg) {
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(led_buffer[0]);
			index_led7seg=1;
			break;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(led_buffer[1]);
			index_led7seg=0;
			break;
		default:
			break;
	}
}


