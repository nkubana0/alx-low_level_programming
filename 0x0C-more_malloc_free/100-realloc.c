#include "main.h"
#include <stdlib.h>

/**
* _realloc -  reallocates a memory block
* @ptr: the pointer to the memory block
* @old_size: the old size
* @new_size: the new size
* Return: no return value
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}
