#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: the width of the grid
* @height: the heigh of the grid
* Return: a pointer to the grid
*/

int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc((sizeof(int *)) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc((sizeof(int)) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			a[m][n] = 0;
		}
	}

	return (a);
}
