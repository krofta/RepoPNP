/*
 * motor_sproc.h
 *
 *  Created on: 25.03.2018
 *      Author: Simon
 */

#ifndef SOURCES_HARDWARE_MOTOR_H_
#define SOURCES_HARDWARE_MOTOR_H_

#include "platform.h"
#include "stdint.h"

#if PL_MOTOR_EN

#define MOT_SPROC_INV (0)
#define MOT_TAPE_INV (0)

typedef enum{
	MOT_NULL,	// 0 is not driving
	MOT_FWD,
	MOT_REV
}MOT_Direction;

typedef enum{
	MOT_SPROC,
	MOT_TAPE
}MOT_Device;

uint8_t MOT_Speed(MOT_Device motor, uint8_t speedPercent, MOT_Direction dir);

void MOT_Init(void);

#endif

#endif /* SOURCES_HARDWARE_MOTOR_H_ */
