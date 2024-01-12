#include "main.h"
#include <stddef.h>

/**
* _strstr - fxn name
* @haystack: param 1
* @needle: param 2
* Return: value
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
