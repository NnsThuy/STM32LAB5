/*
 * Led7_segment.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Song Thuy
 */

#include "fsm_automatic.h"
#include "Software.h"
#include "Led7_segment.h"
int i =0;
int counter=0;
void init_led7(){
	  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
      HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}


void display7SEG(int num){
	switch(num){
				  case 0:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
					  break;
				  case 1:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
					  break;
				  case 2:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 3:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 4:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 5:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 6:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 7:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
					  break;
				  case 8:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  case 9:
					  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
					  break;
				  default:
				      break;
			}
}

const unsigned int MAX_LED = 4;

int index_led=0;
void update7SEG(int index){
	index=index_led%4;
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		    HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			display7SEG(led_buffer[0]);
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			display7SEG(led_buffer[1]);
			break;
		case 2:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			display7SEG(led_buffer[2]);
			break;
		case 3:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
			display7SEG(led_buffer[3]);
			break;
		default:
			break;
	}
}

void led7_run(){
	led_buffer[3]=counterB%10;
	led_buffer[2]=counterB/10;
	led_buffer[1]=counterA%10;
	led_buffer[0]=counterA/10;

		update7SEG(index_led++);

}
