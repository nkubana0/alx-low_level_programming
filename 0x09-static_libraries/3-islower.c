#include "main.h"

/**
* _islower - Checks if a character is lower case
* @c: (char) the character to be checked
* Return: 1 if a character is lower case or zero otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
