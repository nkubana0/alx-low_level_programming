#include "main.h"

/**
 * print_most_numbers -  number 0  to 9
 * use _putchar twice exclude  2 a 4
 * Return : 0
*/

void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
		number += 1;
	}

	_putchar('\n');
}
