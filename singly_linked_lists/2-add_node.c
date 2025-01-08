#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of str
 * @str: str to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;

	i = (list_t *) malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	if (i->str == NULL)
	{
		free(i);
		return (NULL);
	}
	i->next = *head;
	*head = i;

	return (i);
}
