/*
 * Ex3.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Song Thuy
 */

#include "Ex3.h"
int counter_A=0, counter_B=0;
int status_A=0, status_B=0;

void init_Ex3(){
	    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
	    HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	    HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	    HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	    HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	    HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
}
void Ex3_run(){
	switch(status_A){
		  case 0:
			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			  counter_A++;
			  if(counter_A>=5){
				  status_A=1;
				  counter_A=0;
			  }
			  break;
		  case 1:
		 	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		 		  counter_A++;
		 		  if(counter_A>=3){
		 			  status_A=2;
		 			  counter_A=0;
		 		  }
		 		  break;
		  case 2:
			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,RESET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		 		  counter_A++;
		 		  if(counter_A>=2){
		 			  status_A=0;
		 			  counter_A=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
		  switch(status_B){
		  case 0:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			  	  counter_B++;
			  	  if(counter_B>=3){
			  	       status_B=1;
			  	       counter_B=0;
			  	}
			    break;
		  case 1:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			  counter_B++;
			  if(counter_B>=2){
				  status_B=2;
				  counter_B=0;
		 		  }
		 		  break;
		  case 2:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			  counter_B++;
			  if(counter_B>=5){
				  status_B=0;
				  counter_B=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}
