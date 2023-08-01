#include "lists.h"
#include <stdio.h>

size_t loop_listint_count(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_count - counts the number of specific nodes
 * @head: a pointer to the head of the list
 *
 * Return: 0 if ;list is in a loop or  the number of nodes in the list
 */
size_t loop_listint_count(const listint_t *head)
{
	const listint_t *second, *first;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	second = head->next;
	first = (head->next)->next;

	while (first)
	{
		if (second == first)
		{
			second = head;
			while (second != first)
			{
				count++;
				second = second->next;
				first = first->next;
			}

			second = second->next;
			while (second != first)
			{
				count++;
				second = second->next;
			}
			return (count);
		}
		second = second->next;
		first = (first->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a given list with loops
 * @head: a pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = loop_listint_count(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p} %d\n", (void *)head, head->n);
	}
	return (node);
}
