#include "main.h"

/**
 * _puts - Write a function that prints a string
 * @str: integer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

		_putchar('\n');
}
