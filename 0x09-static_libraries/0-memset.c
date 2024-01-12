#include "main.h"
/**
 * *_memset - function fills memory with costant byte
 * @s: memory area
 * @b: constant byte
 * @n: number fo bytes
 *
 * Return: 0 pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *st =  s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (st);
}
