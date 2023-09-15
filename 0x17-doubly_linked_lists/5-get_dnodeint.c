#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index in a given list
 * @head: a pointer to the head of the list
 * @index: the index where the node is located
 *
 * Return: The node at the index or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
