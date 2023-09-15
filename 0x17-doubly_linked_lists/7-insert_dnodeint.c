#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at an index in a given a list
 * @idx: is the index where the new node should be added
 * @n: input value
 * @h: a pointer to head of the list
 * Return: the address of the new node or NULL if failed and if it is not possible to add the
 * new node at index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *dlist;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if (idx == 0)
	{
	new_node->prev = NULL;
	new_node->next = *h;
	if (*h)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}

	dlist = *h;
	for (i = 0; dlist != NULL && i < idx; i++)
	{
		dlist = dlist->next;
	}
	if (i == idx)
	{
		new_node->prev = dlist->prev;
		new_node->next = dlist;
		if (dlist->prev)
			dlist->prev->next = new_node;
		dlist->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
