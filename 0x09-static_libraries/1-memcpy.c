#include "main.h"

/**
* _memcpy - memory with a constant byte.
* @dest: memory area
* @src: constant byte
* @n: the first n bytes
* Return: a pointer to new memory location
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
