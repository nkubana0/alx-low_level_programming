#include "main.h"

/**
* _isupper - Checks if a character is uppercase
* @c: (char) the character to be checked
* Return: 1 if a character upppercase or zero otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
