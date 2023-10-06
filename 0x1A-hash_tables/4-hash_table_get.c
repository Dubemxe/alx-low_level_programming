#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the key
 * @ht: is a pointer to the hash table
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int I_key;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	I_key = key_index((const unsigned char *)key, ht->size);
	if (I_key >= ht->size)
		return (NULL);

	node = ht->array[I_key];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
