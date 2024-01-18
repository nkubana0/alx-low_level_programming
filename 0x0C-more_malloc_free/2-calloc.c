#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements in array
* @size: the size of the element
* Return: no return value
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	pointer = malloc(j);
	if (pointer == NULL)
		return (NULL);
	while (i < j)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
