/*
 * global.h
 *
 *  Created on: Dec 9, 2024
 *      Author: Song Thuy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "Auto_fsm.h"

#define INIT 0
#define READING 1
#define STOP 2
#define RST 8
#define OK 9

#define MAX_CMD_SIZE 3
#define MAX_BUFFER_SIZE 30

extern int statusA;
extern int ADC_value;

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint8_t buffer_byte;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern uint8_t cmd_flag;
extern uint8_t cmd_data[MAX_CMD_SIZE];
extern uint8_t cmd_data_index;

extern char str[50];

#endif /* INC_GLOBAL_H_ */
