#include "main.h"

/**
* _islower - Entry point, prints letters is lower
*
* @c: is the character tocheck for
* Return: Always null (Success)
*/
int _islower(int c)
{
	char index;
	int islower = 0;

	for (index = 'a'; index <= 'z'; index++)
	{
		if (index == c)
		{
			islower = 1;
		}
	}
	return (islower);
}
