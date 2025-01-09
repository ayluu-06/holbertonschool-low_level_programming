#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of str
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *temp = *head;
	int j = 0;

	i = malloc(sizeof(list_t));

	if (i == NULL)
		return (NULL);

	i->str = strdup(str);
	if (i->str == NULL)
	{
		free(i);
		return (NULL);
	}

	while (str[j] != '\0')
		j++;

	i->len = j;

	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = i;
	}

	return (i);
}
