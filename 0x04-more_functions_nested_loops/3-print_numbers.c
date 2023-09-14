#include "main.h"

/**
 * print_numbers -number 0  to 9
 * use _putchar only twice
 * Return: 0 always
*/

void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number += 1;
	}

	_putchar('\n');
}
