/*
 * global.c
 *
 *  Created on: Dec 9, 2024
 *      Author: Song Thuy
 */
#include "global.h"
#include "Auto_fsm.h"

int statusA = INIT;
int ADC_value = 0;

uint8_t buffer_byte;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

uint8_t cmd_flag = INIT;
uint8_t cmd_data[MAX_CMD_SIZE];
uint8_t cmd_data_index = 0;

char str[50];
