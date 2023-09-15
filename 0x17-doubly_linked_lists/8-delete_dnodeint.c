#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node at an index in a given list
 * @head: a pointer to the head of the list
 * @index: the index where the node is located
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *dlist;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	dlist = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(dlist);
		return (1);
	}
	while (dlist != NULL && i < index)
	{
		temp = dlist;
		dlist = dlist->next;
		i++;
	}
	if (i == index)
	{
		if (dlist)
			dlist->prev = temp;
		temp->next = dlist ? dlist->next : NULL;
		free(dlist);
		return (-1);
	}

	return (-1);
}
