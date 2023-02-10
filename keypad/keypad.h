#ifndef INC_KEYPAD_H_
#define INC_KEYPAD_H_

#include "stm32f1xx_hal.h"
#include "main.h"
#include "i2c-lcd.h"

// OUTPUTS
#define R1_PORT GPIOA
#define R1_PIN GPIO_PIN_7

#define R2_PORT GPIOA
#define R2_PIN GPIO_PIN_4

#define R3_PORT GPIOA
#define R3_PIN GPIO_PIN_5

#define R4_PORT GPIOA
#define R4_PIN GPIO_PIN_6

// INPUTS
#define C1_PORT GPIOA
#define C1_PIN GPIO_PIN_2

#define C2_PORT GPIOA
#define C2_PIN GPIO_PIN_3

#define C3_PORT GPIOA
#define C3_PIN GPIO_PIN_0

#define C4_PORT GPIOA
#define C4_PIN GPIO_PIN_1

#define keypad_delay 200

char read_keypad(void);
char read_keypad_int(void);
int input_int(char row, char column);

#endif /* INC_KEYPAD_H_ */
