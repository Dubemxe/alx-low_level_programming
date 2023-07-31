#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a given linked list
 * @head: a pointer to the head of the list
 *
 * Return: the sum of all of all data or else 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
