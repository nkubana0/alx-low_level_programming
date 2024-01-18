#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - returns a pointer to a 2 dimensional array of integers
* @min: the minimum value
* @max: the maximum value
* Return: a pointer to the array
*/

int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}

	return (p);
}
