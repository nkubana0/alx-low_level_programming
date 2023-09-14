#include "main.h"

/**
 * print_triangle -display a  shape triange
 * @size: size of the shape
 * Return:0 
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int row = 1, sign;

		while (row <= size)
		{
			for (sign = 1; sign <= size; sign += 1)
			{
				if ((row + sign) <= size)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
			row += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
