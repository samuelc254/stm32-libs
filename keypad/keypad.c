#include "keypad.h"

char read_keypad(void) {
	static volatile unsigned int last_time = 0;
	if (uwTick - last_time >= keypad_delay) {
		last_time = uwTick;
		/* Make ROW 1 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_RESET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return '1';
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return '2';
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return '3';
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'B';
		}

		/* Make ROW 2 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_RESET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return '4';
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return '5';
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return '6';
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'C';
		}

		/* Make ROW 3 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_RESET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return '7';
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return '8';
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return '9';
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'D';
		}

		/* Make ROW 4 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_RESET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return '*';
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return '0';
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return '#';
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'A';
		}
	}
	return ' ';
}

char read_keypad_int(void) {
	static volatile unsigned int last_time = 0;
	if (uwTick - last_time >= keypad_delay) {
		last_time = uwTick;
		/* Make ROW 1 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_RESET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return 1;
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return 2;
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return 3;
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'B';
		}

		/* Make ROW 2 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_RESET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return 4;
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return 5;
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return 6;
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'C';
		}

		/* Make ROW 3 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_RESET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_SET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return 7;
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return 8;
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return 9;
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'D';
		}

		/* Make ROW 4 LOW and all other ROWs HIGH */
		HAL_GPIO_WritePin(R1_PORT, R1_PIN, GPIO_PIN_SET);  //Pull the R1 low
		HAL_GPIO_WritePin(R2_PORT, R2_PIN, GPIO_PIN_SET);  // Pull the R2 High
		HAL_GPIO_WritePin(R3_PORT, R3_PIN, GPIO_PIN_SET);  // Pull the R3 High
		HAL_GPIO_WritePin(R4_PORT, R4_PIN, GPIO_PIN_RESET);  // Pull the R4 High

		if (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))   // if the Col 1 is low
		{
			while (!(HAL_GPIO_ReadPin(C1_PORT, C1_PIN)))
				;   // wait till the button is pressed
			return '*';
		}

		if (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))   // if the Col 2 is low
		{
			while (!(HAL_GPIO_ReadPin(C2_PORT, C2_PIN)))
				;   // wait till the button is pressed
			return 0;
		}

		if (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))   // if the Col 3 is low
		{
			while (!(HAL_GPIO_ReadPin(C3_PORT, C3_PIN)))
				;   // wait till the button is pressed
			return '#';
		}

		if (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))   // if the Col 4 is low
		{
			while (!(HAL_GPIO_ReadPin(C4_PORT, C4_PIN)))
				;   // wait till the button is pressed
			return 'A';
		}
	}
	return ' ';
}

int input_int(char row, char column) {
	int input_value = 0;
	char key = read_keypad_int();
	while (key != 'A') {
		if (key < 10 && input_value < 9999) {
			input_value *= 10;
			input_value += key;
		} else if (key == 'B') {
			input_value /= 10;
		} else {
			lcd_cursor(row, column);
			lcd_int(input_value);
			lcd_string(" ");
		}
		key = read_keypad_int();
	}
	return input_value;
}
