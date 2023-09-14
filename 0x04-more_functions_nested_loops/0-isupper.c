#include "main.h"

/**
 * _isupper - verify if argument is uppercase
 * @c: argument taken
 *
 * Return: 0 or 1 successfully 1 for uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
