#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a given list
 * @head: a pointer to the given list
 *
 * Return: Nothig!
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
