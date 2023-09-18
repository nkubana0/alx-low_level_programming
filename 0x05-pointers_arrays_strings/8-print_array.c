#include "main.h"
#include <stdio.h>
/**
 * print_array - dipslay n item of array integer
 * @arr: array
 * @n : number of elements
 * Return:void
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i += 1)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
