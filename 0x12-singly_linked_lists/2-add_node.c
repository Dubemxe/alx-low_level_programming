#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node to the beginning of a given list
 * @head: a pointer to the given list
 * @str: a pointer string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
