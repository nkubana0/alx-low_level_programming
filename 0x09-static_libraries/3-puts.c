#include "main.h"

/**
* _puts - A function that prints a string
* @str: a pointer to the string to be printed
* Return: Just prints the string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
