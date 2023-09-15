#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) in a given linked list
 * @head: a pointer to the head the list
 *
 * Return: The sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
