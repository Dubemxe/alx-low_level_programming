#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of list_t list
 * @h: a pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t  nNodes = 0;


	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	nNodes++;
	}
	return (nNodes);
}
