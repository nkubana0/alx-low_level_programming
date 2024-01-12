#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: a pointer to the string
* Return: integer equivalent of the string
*/

int _atoi(char *s)
{
	int i = 0;

	unsigned int j = 0;

	int m = 1;

	int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			m *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			n = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (n == 1)
		{
			break;
		}
		i++;
	}
	j *= m;

	return (j);
}
