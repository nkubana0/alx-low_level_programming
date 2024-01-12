#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a char in string
 * @s: string
 * @c: Character
 *
 * Return: :) Success 0 Pointer to the first occurance of the char c in s
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
