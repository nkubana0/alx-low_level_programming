#include "main.h"

/**
* _strcpy - opies the string pointed to by src
* @dest: the destination
* @src: the source
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
