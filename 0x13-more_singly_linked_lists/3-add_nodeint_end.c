#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a given list
 * @head: a pointer to the given list
 * @n: an integer value for the new node
 *
 * Return: a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	} else
	{
		temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	}
	return (newNode);
}
