#include "main.h"

/**
 *  _strcmp - compare to strings values
 * @str1: parameter of first string given
 * @str2: parameter of second string given
 *
 * Return: difference value ascii
 */
int _strcmp(char *str1, char *str2)
{
	int len = 0;

	while (str1[len] != '\0' && str2[len] != '\0')
	{
		if (str1[len] != str2[len])
		{
			return (str1[len] - str2[len]);
		}
		len += 1;
	}
	return (0);
}
