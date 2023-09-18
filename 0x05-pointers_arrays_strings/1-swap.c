#include "main.h"

/**
 * swap_int - swap 2 numbers
 * @num1: first parameter
 * @num2: second parameter
 * Return: result
 */

void swap_int(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
