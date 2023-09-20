#include "main.h"

/**
 *print_number - prints integers WITH PUTCHAR
 *@n: parameter of cuntion
 *Return: nothing
 */
void print_number(int n)
{
	unsigned int newN = n;

	if (n < 0)
	{
		_putchar('-');
		newN = newN * -1;
	}
	if ((newN / 10) > 0)
		print_number(newN / 10);
	_putchar((newN % 10) + '0');
}
