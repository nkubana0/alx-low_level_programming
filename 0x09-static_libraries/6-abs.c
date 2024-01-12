#include "main.h"

/**
 * _abs - this is the entry point
 * @r: is the input
 * Description: This function returns absolute value of a number
 * Return: returns the abs value of r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
