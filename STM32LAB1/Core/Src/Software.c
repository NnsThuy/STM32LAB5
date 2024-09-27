/*
 * Software.c
 *
 *  Created on: Sep 21, 2024
 *      Author: Song Thuy
 */
#include "Software.h"

int timerCounter[10];
int timerFlag[10];

void setTimer(int index, int counter){
	timerCounter[index]=counter/10;
	timerFlag[index]=0;
}

void timeRun(){
	for (int i=0; i<10; i++){
		if(timerCounter[i]>=0){
			timerCounter[i]--;
			if(timerCounter[i]<=0){
				timerFlag[i]=1;
			}
		}
	}
}
