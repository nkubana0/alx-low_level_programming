#include "main.h"

/**
 * *_strncpy - copy string with n number bytes
 * @dest: parametre destination
 * @src: parameter source
 * @n: parameter number
 * Return: value of new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len += 1;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len += 1;
	}

	return (dest);
}
