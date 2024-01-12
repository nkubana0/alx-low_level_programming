#include "main.h"

/**
* _strncpy - copies strings
* @dest: the destination
* @src: the source
* @n: the number of bytes to use
* Return: a pointer to the src
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0, i = 0;

	while (src[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
