#include "main.h"

/**
 * print_line - display a line
 * @number: the argument of the how many _ character
 *     for line
 */

void print_line(int number)
{
	if (number > 0)
	{
		int count = 0;

		while (count < number)
		{
			_putchar(95);
			count += 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
