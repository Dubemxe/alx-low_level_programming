#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a given list
 * @head: a pointer to the given list
 * @str: a pointer string
 *
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
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
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
