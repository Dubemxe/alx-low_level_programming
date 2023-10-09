#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the sorted table
 *
 * Return: a pointer to the new sorted hash table or NULL if fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - adds a new element to the table
 * @ht: a pointer to the sorted hash table
 * @key: the key to add
 * @value: the value associated with the key
 *
 * Return: 1 on success or 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *ele;
	shash_node_t *temp;
	char *cp_value;
	unsigned long int I_key;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);
	I_key = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = cp_value;
			return (1);
		}
		temp = temp->snext;
	}

	ele = malloc(sizeof(shash_node_t));
	if (ele == NULL)
	{
		free(cp_value);
		return (0);
	}
	ele->key = strdup(key);
	if (ele->key == NULL)
	{
		free(cp_value);
		free(ele);
		return (0);
	}
	ele->value = cp_value;
	ele->next = ht->array[I_key];
	ht->array[I_key] = ele;

	if (ht->shead == NULL)
	{
		ele->sprev = NULL;
		ele->snext = NULL;
		ht->shead = ele;
		ht->stail = ele;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		ele->sprev = NULL;
		ele->snext = ht->shead;
		ht->shead->sprev = ele;
		ht->shead = ele;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		ele->sprev = temp;
		ele->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = ele;
		else
			temp->snext->sprev = ele;
		temp->snext = ele;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 * a key in a sorted hash table
 *
 * @ht: a pointer to the sorted hash table
 * @key: the key to get the value of
 *
 * Return: the value associated with key in ht or NULL if key cannot be matched
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order
 * @ht: a pointer to the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: a pointer to the sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: a pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
