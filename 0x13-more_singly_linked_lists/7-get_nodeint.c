#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a given linked list
 * @head: a pointer to the head of the list
 * @index: the index of the nodes starting from 0
 *
 * Return: a pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *var = head;
	unsigned int count = 0;

	while (var != NULL)
	{
		if (count == index)
			return (var);

	var = var->next;
	count++;
	}
	return (NULL);
}
