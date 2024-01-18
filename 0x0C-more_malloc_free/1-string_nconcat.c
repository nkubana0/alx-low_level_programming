#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat -  concatenates two strings
* @s1: the pointer to first string
* @s2: the pointer to the second string
* @n: the memory size to allocate
* Return: the pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		m = i + j;
	else
		m = i + n;
	s = malloc(sizeof(char) * m + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (l < m)
	{
		if (l <= i)
			s[l] = s1[l];
		if (l >= i)
		{
			s[l] = s2[j];
			j++;
		}
		l++;
	}
	s[l] = '\0';
	return (s);
}
