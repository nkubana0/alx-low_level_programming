#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: a pointer to the pointer of the previous grid
* @height: the height to free up
* Return: does not return any value
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
