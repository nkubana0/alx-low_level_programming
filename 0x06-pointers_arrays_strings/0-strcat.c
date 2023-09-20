#include "main.h"

/**
 *  *_strcat - concatenate two strings
 *  @src: source parameter
 *  @dest: destination parameter
 *  Return: return char
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, count;

	while (dest[len] != '\0')
	{
		len++;
	}

	count = 0;

	while (src[count] != '\0')
	{
		dest[len] = src[count];
		len++;
		count++;
	}

	dest[len] = '\0';
	return (dest);
}
