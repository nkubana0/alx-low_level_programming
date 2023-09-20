#include "main.h"

/**
 *  *_strncat - concatenate two strings with n bytes
 *  @src: source parameter
 *  @dest: destination parameter
 *  @n: numberbyte parametre
 *  Return: return char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, count = 0;

	while (dest[len] != '\0')
	{
		len += 1;
	}
	while (src[count] != '\0' && count < n)
	{
		dest[len] = src[count];
		len += 1;
		count += 1;
	}
	dest[len] = '\0';
	return (dest);
}
