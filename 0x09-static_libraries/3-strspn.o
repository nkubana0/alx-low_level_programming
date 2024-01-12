#include "main.h"

/**
 * _strspn - gets the lenght of prefix substring
 * @s: initial segment
 * @accept: bytes from
 *
 * return: 0 :) success number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (b);
			}
		}
		s++;
	}
	return (b);
}
