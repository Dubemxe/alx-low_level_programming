#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a given a given list
 * @head: a pointer to the given list
 * Return: Nothing!
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
