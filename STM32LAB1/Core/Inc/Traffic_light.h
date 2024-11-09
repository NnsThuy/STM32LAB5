/*
 * Traffic_light.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Song Thuy
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "main.h"

#include "fsm_automatic.h"
#include "global.h"

void init_Traffic_light();
void Traffic_light_run();
void TurnOnRed_A();
void TurnOnYellow_A();
void TurnOnGreen_A();
void TurnOnRed_B();
void TurnOnGreen_B();
void TurnOnYellow_B();

#endif /* INC_TRAFFIC_LIGHT_H_ */
