/*
 * Traffic_light.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Song Thuy
 */

#include "fsm_automatic.h"
#include "global.h"
#include "Traffic_light.h"

void init_Traffic_light(){
	    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	    HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
}

void TurnOnRed_A(){
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
}
void TurnOnYellow_A(){
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
}
void TurnOnGreen_A(){
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
}
void TurnOnGreen_B(){
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
}
void TurnOnRed_B(){
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
}
void TurnOnYellow_B(){
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
}


