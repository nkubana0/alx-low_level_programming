#include "main.h"

/**
 * _puts - print string followed by a new line
 * @str: string to print
 *
 * Return: 1 Success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
