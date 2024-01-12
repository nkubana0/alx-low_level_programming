#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: the input string
* Return: the length of the string
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
