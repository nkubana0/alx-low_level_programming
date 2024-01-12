#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area __to
 * @src:  memory area __from
 * @n: Number of Bytes
 *
 * Return: 0 :) Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *st = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (st);
}
