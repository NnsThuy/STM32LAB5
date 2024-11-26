/*
 * scheduler.c
 *
 *  Created on: Nov 24, 2024
 *      Author: Song Thuy
 */

#include "scheduler.h"
#include "main.h"


sTasks SCH_tasks_G[SCH_MAX_TASKS];


void SCH_Init(void){
	uint32_t i;
	for (i = 0; i < SCH_MAX_TASKS; i++){
		SCH_Delete_Task(i);
	}
	Error_code_G = 0;
}

void SCH_Update(void){
	uint32_t Index;
	for (Index = 0; Index < SCH_MAX_TASKS; Index++){
		if(SCH_tasks_G[Index].pTask){
			if(SCH_tasks_G[Index].Delay == 0){
				SCH_tasks_G[Index].RunMe += 1;
				if(SCH_tasks_G[Index].Period){
					SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
				}
			}
			else{
				SCH_tasks_G[Index].Delay -= 1;
			}
		}
	}
}

void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD, uint32_t TASK_INDEX){
	unsigned char Index = 0;
	while ((SCH_tasks_G[Index].pTask != 0) && (Index < SCH_MAX_TASKS)){
		Index++;
	}
	if(Index == SCH_MAX_TASKS){
		Error_code_G = ERROR_SCH_TOO_MANY_TASKS;
		return;
	}
	SCH_tasks_G [Index].pTask = pFunction ;
	SCH_tasks_G [Index].Delay = DELAY ;
	SCH_tasks_G [Index].Period = PERIOD ;
	SCH_tasks_G [Index].RunMe = 0 ;
    SCH_tasks_G [Index].TaskID = TASK_INDEX;
}

void SCH_Dispatch_Tasks(void){
	uint32_t Index = 0;
	for(Index = 0; Index < SCH_MAX_TASKS; Index++){
		if(SCH_tasks_G[Index].RunMe > 0){

			(*SCH_tasks_G[Index].pTask)();
			SCH_tasks_G[Index].RunMe -= 1;
			if(SCH_tasks_G[Index].Period == 0){
				SCH_Delete_Task(SCH_tasks_G [Index].TaskID);

			}
		}
	}
}

void SCH_Delete_Task (const uint32_t TASK_INDEX) {

	if(SCH_tasks_G[TASK_INDEX].pTask == 0){
		Error_code_G = ERROR_SCH_CANNOT_DELETE_TASK;

	} else {

	SCH_tasks_G[TASK_INDEX].pTask = 0x0000 ;
	SCH_tasks_G[TASK_INDEX].Delay = 0 ;
	SCH_tasks_G[TASK_INDEX].Period = 0 ;
	SCH_tasks_G[TASK_INDEX].RunMe = 0 ;
	SCH_tasks_G[TASK_INDEX].TaskID = 0;
  }
}

