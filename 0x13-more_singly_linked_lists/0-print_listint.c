#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements of a given list
 * @h: a pointer to the given list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nNodes++;
		h = h->next;

	}
	return (nNodes);
}
