#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to the the pointer to the head of a list
 *
 * Return: Nothing!
 */
void free_listint2(listint_t **head)
{
	listint_t *var;
	listint_t *temp;

	if (head == NULL)
		return;

	var = *head;
	while (var)
	{
		temp = var;
		var = var->next;
		free(temp);
	}
	*head = NULL;
}
