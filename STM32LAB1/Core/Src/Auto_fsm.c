/*
 * Auto_fsm.c
 *
 *  Created on: Dec 8, 2024
 *      Author: Song Thuy
 */

#include "Auto_fsm.h"
#include "global.h"

int isStringEqualToRST(uint8_t str[]) {
	if (str[0] == 'R' && str[1] == 'S' && str[2] == 'T')
		return 1;
	else
		return 0;
}

int isStringEqualToOK(uint8_t str[]) {
	if (str[0] == 'O' && str[1] == 'K')
		return 1;
	else
		return 0;
}

void command_parser_fsm() {
	switch (statusA) {
	case INIT:
		if (buffer_byte == '!')
			statusA = READING;
		break;
	case READING:
		if (buffer_byte != '!' && buffer_byte != '#') {
			cmd_data[cmd_data_index] = buffer_byte;
			cmd_data_index++;
		}
		if (buffer_byte == '#') {
			statusA = STOP;
			cmd_data_index = 0;
		}
		break;
	case STOP:
		if (isStringEqualToRST(cmd_data) == 1) {
			cmd_flag = RST;
			setTimer1(1);
		} else if (isStringEqualToOK(cmd_data) == 1) {
			cmd_flag = OK;
		}
		statusA = INIT;
		break;
	default:
		break;
	}
}

void uart_communiation_fsm() {

	switch (cmd_flag) {
	case RST:
		if (timer1_flag == 1) {
			ADC_value = HAL_ADC_GetValue(&hadc1);
			HAL_UART_Transmit(&huart2, (void*) str,
					sprintf(str, "!ADC=%d#\r\n", ADC_value), 500);
			setTimer1(100);
		}
		break;
	case OK:
		ADC_value = -1;
		cmd_flag = INIT;
		break;
	default:
		break;
	}
}
