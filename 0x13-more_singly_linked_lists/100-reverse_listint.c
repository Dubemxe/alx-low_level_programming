#include "lists.h"

/**
 * reverse_listint - reserves a given linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: a pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = new;
	}
	*head = rev;
	return (*head);
}
