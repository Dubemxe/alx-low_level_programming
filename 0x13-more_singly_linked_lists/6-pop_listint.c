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
	int N;
	listint_t *temp;

	if (!head || !*head)
	return (0);

	N = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (N);
}
