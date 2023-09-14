#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a given list
 * @h: list to print its elemnts
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t N_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		N_nodes++;
	}

	return (N_nodes);
}
