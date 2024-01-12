#include "main.h"

/**
 * _isalpha - checks for alp character
 * @c: is the alphabetic to check
 * Return: isletter Always
 */
int _isalpha(int c)
{
	char low, up;
	int isl = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				isl = 1;
		}
	}
	return (isl);
}
