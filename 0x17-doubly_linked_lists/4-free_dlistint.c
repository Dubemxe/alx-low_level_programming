#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a given list
 * @head: a pointer to the of the list
 *
 * Return: Nothing!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
