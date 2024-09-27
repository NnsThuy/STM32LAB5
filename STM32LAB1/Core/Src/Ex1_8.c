/*
 * Ex1_8.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Song Thuy
 */

#include <Ex1_8.h>


void init_Ex1_8(){
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
int led_buffer[4] = {1, 2, 3, 0};
int index_led=0;
void update7SEG(int index){
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		    HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[0]);
			index=1;
			break;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[1]);
			index=2;
			break;
		case 2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[2]);
			index=3;
			break;
		case 3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[3]);
			index=0;
			break;
		default:
			break;
	}
}

int hour=15;
int minute=8;
int second=50;
void Clock(){
     second ++;
     if (second >= 60) {
       second = 0;
       minute ++;
     }
     if(minute >= 60) {
       minute = 0;
       hour ++;
     }
     if(hour >=24) {
       hour = 0;
     }
     updateClockBuffer() ;
}

void updateClockBuffer(){
		led_buffer[3]=minute%10;
		led_buffer[2]=minute/10;
		led_buffer[1]=hour%10;
		led_buffer[0]=hour/10;
}

void Ex1_8_run(){
	update7SEG(index_led++);
		   if (index_led>=4)
			   index_led=0;

}


