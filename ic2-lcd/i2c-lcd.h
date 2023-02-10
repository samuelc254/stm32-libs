#ifndef I2C_LCD_H
#define I2C_LCD_H

#include <stdio.h>
#include "stm32f1xx_hal.h"

void lcd_init(void);   // initialize lcd

void lcd_send_cmd(char cmd);  // send command to the lcd

void lcd_send_data(char data);  // send data to the lcd

void lcd_string(char* str);  // send string to the lcd

void lcd_int(int number);

void lcd_cursor(uint8_t row, uint8_t column);

void lcd_clear(void);

#endif
