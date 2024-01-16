#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: pointer to first string
* @s2: pointer to second string
* Return: character pointer to concat string
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m = 0, n = 0;
	char *ch;

	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
		j++;
	n = i + j;
	ch = malloc((sizeof(char) * n) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (m < n)
	{
		if (m <= i)
		{
			ch[m] = s1[m];
		}
		if (m >= i)
		{
			ch[m] = s2[j];
			j++;
		}
		m++;
	}
	ch[m] = '\0';
	return (ch);
}
