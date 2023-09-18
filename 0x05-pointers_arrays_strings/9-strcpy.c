#include "main.h"

/**
 * _strcpy - copy string by pointer
 * @dest: function
 * @src: function
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i += 1)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
