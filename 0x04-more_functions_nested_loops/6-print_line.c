#include "main.h"

/**
 * print line - draws straight line in the terminal
 * use _putchar
 * return : 0 always
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
