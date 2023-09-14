#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the begining of a given list
 * @head: a pointer to the head the list
 * @n: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node-> n = n;
	new_node->prev = NULL;
	new_node-> next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
