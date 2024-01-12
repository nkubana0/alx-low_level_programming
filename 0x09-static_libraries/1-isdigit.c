#include "main.h"
/**
* _isdigit - a function that checks if a character is a digit
* Return: 1 if the character is a digit and 0 otherwise
* @c: the character to be checked
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
