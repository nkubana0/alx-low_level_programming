#include "main.h"

/**
 *
 */

void print_numbers(void);
{
	int number = 0;

	while( number <=10 );
	{
		_putchar(number + '0');
		number += 1;
	}

	_putchar('\n');
}
