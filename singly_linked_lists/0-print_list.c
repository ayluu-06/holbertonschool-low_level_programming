#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: contst ptr
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL) /*accede al str dentro del node*/
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str); /*%u to print int sin signo,%s for str*/
	}
	return (1 + print_list(h->next)); /*llama recurs la fun to print next node*/
}
