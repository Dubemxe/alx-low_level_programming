#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return the the number of elements in a given list
 * @h: a pointer to the given list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numEle = 0;

	while (h != NULL)
	{
	numEle++;
	h = h->next;
	}
	return (numEle);
}
