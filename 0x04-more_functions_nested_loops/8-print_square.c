#include "main.h"

/**
 * print_square - a square with hash and a new line
 * @size: side of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row = 0, side;

		while (row < size)
		{
			for (side = 0; side < size; side += 1)
			{
				_putchar(35);
			}
			row += 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
