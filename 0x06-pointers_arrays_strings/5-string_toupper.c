#include "main.h"
/**
 * *string_toupper - change lower to uppercase
 * @str: parametre of function given
 * Return: value of new string
 *
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 97 && str[len] <= 122)
		{
			str[len] -= 32;
		}
		len += 1;
	}
	return (str);
}
