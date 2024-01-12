#include "main.h"

/**
* _memset - memory with a constant byte.
* @s: memory area
* @b: constant byte
* @n: the first n bytes
* Return: a pointer to new memory location
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
