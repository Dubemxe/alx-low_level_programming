#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a given linked list
 * @head: a pointer to the pointer to the head of the list
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
