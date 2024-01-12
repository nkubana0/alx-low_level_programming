#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string input
 * @s2: second string
 *
 * return: success 0 and :) smile
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
