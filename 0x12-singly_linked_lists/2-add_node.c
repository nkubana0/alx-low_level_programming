#include "lists.h"

/**
* *add_node - it adds a new node at the beginning of a list_t list
* @head: a double pointer to the head list_t list
* @str:  needs to be duplicated
* Return: the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int size = 0;

	while (str[size])
	{
		size++;
	}

	tmp = malloc(sizeof(list_t));
	if (!tmp)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = size;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
