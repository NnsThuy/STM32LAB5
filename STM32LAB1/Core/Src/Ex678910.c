/*
 * Ex678910.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Song Thuy
 */
#include "Ex678910.h"
int minute=0;
int second=0;
int hour=0;
void init_Ex678910(){
	    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
	    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
	    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
	    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
	    HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
	    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
	    HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
	    HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
	    HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
	    HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
	    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
	    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
}
void clearAllClock(){
        HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
        HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
    	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
    	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);

     }
void setNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
	    break;
	case 4:
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
		break;
	case 0:
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		break;
	default:
		break;
	}
}

void clearNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	    break;
	case 4:
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		break;
	case 0:
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
		break;
	default:
		break;
	}
}
void Ex678910_run(){
    second++;
	if (second>=60){
    	second=0;
    	minute++;
    }

    if(minute>=60){
    	minute=0;
    	hour++;
    }

    if (hour>=10){
    	hour=0;
    }
    clearAllClock();
    setNumberOnClock(second/5);
    setNumberOnClock(minute/5);
    setNumberOnClock(hour);

}
