#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: the number of parameters
* @...: the list of parameters
* Return: sum of paramaters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, total = 0;

	va_start(a, n);


	for (i = 0; i < n; i++)
	{
		total += va_arg(a, int);
	}

	va_end(a);
	return (total);
}
