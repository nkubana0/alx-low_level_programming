#include "main.h"

/**
 * _strcat - function  that concatenates two strings
 * @dest: string to append to
 * @src: to  be appended
 *
 * Return: :) smile for Success
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
