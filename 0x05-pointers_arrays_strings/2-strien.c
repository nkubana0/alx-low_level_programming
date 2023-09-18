#include "main.h"

/**
 * _strlen - function that gives the length of the string
 * @str: parameter of string to count
 * Return: value of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len += 1;
		str++;
	}
	return (len);
}
