/*
 * Ex1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Song Thuy
 */
#include "Ex1.h"
int counter=0;
int status=0;

void init_Ex1(){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void Ex1_run(){
	switch(status){
		  case 0:
			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  counter++;
			  if(counter>=2){
				  status=1;
				  counter=0;
			  }
			  break;
		  case 1:
		 		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		 		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		 		  counter++;
		 		  if(counter>=2){
		 			  status=0;
		 			  counter=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}
