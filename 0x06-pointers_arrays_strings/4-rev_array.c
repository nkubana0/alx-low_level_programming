#include "main.h"

/**
 * reverse_array - reverse array
 * @arr: parameter of array
 * @num: parameter of size array
 * Return: nothing
 */

void reverse_array(int *arr, int num)
{
	int tmp = 0, first = 0, last = num - 1;

	while (first <= last)
	{
		tmp = arr[first];
		arr[first] = arr[last];
		arr[last] = tmp;
		first += 1;
		last -= 1;
	}
}
