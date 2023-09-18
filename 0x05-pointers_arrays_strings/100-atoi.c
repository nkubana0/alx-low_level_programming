#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * * @str: paramter of string function
 *
 * Return: number
 */

int _atoi(char *str)
{
	int neg = -1, len = 0, dif = 0;

	while (str[len] != '\0')
	{
		if (str[len] == '-')
		{
			neg *= -1;
		}
		if (str[len] > 47 && str[len] < 58)
		{
			if (dif < 0)
			{
				dif = (dif * 10) - (str[len] - '0');
			}
			else
			{
				dif = (str[len] - '0') * -1;
			}
			if (str[len + 1] < 48 || str[len + 1] > 57)
			{
				break;
			}
		}
		if (neg < 0)
		{
			dif *= 1;
		}
		len += 1;
	}
	return (dif * neg);
}

