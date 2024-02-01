#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the struct
* @str: string pointer to hold value
* Return: the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lt;
	list_t *tmp = *head;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	lt = malloc(sizeof(list_t));
	if (!lt)
	{
		return (NULL);
	}

	lt->str = strdup(str);
	lt->len = i;
	lt->next = NULL;

	if (*head == NULL)
	{
		*head = lt;
		return (lt);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = lt;

	return (lt);
}
