#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a given list
 * @h: list with elements
 *
 * Return: the number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t N_ele = 0;

	while (h != NULL)
	{
		N_ele++;
		h = h->next;
	}

	return (N_ele);
}
