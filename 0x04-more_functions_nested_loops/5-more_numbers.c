#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 10 times
 * use _putchar three times in code
 * return : 0 always
*/

void more_numbers(void)
{
	int row, number;

	for (row = 0 ; row < 10 ; row += 1)
	{
		number = 0;

		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number += 1;
		}
		_putchar('\n');
	}
}
