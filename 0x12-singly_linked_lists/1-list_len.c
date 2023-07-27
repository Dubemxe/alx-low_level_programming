#include "lists.h"

/**
 * list_len - returns the number of elements in a given linked list
 * @h: a pointer to a given linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t numEle = 0;

	while (h != NULL)
	{
		numEle++;
		h = h->next;
	}
	return (numEle);
}
