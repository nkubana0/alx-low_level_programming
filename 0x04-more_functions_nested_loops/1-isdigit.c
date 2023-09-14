#include "main.h"

/**
 * _isdigit - verify if argument is uppercase
 * @c: argument taken
 *
 * Return: 0 or 1 successfully 1 for uppercase
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
