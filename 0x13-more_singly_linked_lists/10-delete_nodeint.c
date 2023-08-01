#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @index: the position of the node
 *
 * Return: 1 if success or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *var;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (1);

		temp = temp->next;
		i++;
	}
	var = temp->next;
	temp->next = var->next;
	free(var);

	return (1);
}
