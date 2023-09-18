#include "main.h"

/**
 * puts_half - print half string
 * @str : parameter of the function
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0, half, i;

	while (str[len] != '\0')
	{
		len += 1;
	}

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	for (i = half; i < len; i += 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
