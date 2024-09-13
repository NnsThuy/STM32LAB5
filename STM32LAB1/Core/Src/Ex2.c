/*
 * Ex2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Song Thuy
 */

#include "Ex2.h"
int counter1=0;
int status1=0;

void init_Ex2(){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void Ex2_run(){
	switch(status1){
		  case 0:
			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			  counter1++;
			  if(counter1>=3){
				  status1=1;
				  counter1=0;
			  }
			  break;
		  case 1:
		 	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		 		  counter1++;
		 		  if(counter1>=2){
		 			  status1=2;
		 			  counter1=0;
		 		  }
		 		  break;
		  case 2:
		 	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		 		  counter1++;
		 		  if(counter1>=5){
		 			  status1=0;
		 			  counter1=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}

