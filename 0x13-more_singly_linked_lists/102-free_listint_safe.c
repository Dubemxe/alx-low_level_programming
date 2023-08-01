#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a given list with loops
 * @h: a pointer to the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int next;
	size_t size = 0;

	if (*h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		next = *h - (*h)->next;
		if (next > 0)
		{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
return (size);
}
