#include "main.h"

/**
* _isalpha - Checks if a character is an alphabet
* @c: (char) the character to be checked
* Return: 1 if a character is an alphabet or zero otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
