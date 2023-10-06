#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key
 * @value: the value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ele;
	char *cp_value;
	unsigned long int I_key, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	I_key = key_index((const unsigned char *)key, ht->size);
	for (i = I_key; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}
	ele = malloc(sizeof(hash_node_t));
	if (ele == NULL)
	{
		free(cp_value);
		return (0);
	}
	ele->key = strdup(key);
	if (ele->key == NULL)
	{
		free(ele);
		return (0);
	}
	ele->value = cp_value;
	ele->next = ht->array[I_key];
	ht->array[I_key] = ele;

	return (1);
}
