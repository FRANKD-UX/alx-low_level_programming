#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: Pointer to the hash table
 * @key: Key to search for
 *
 * Return: The value associated with the key, or NULL if key was not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Search for the key in the linked list at the index */
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* Key not found */
	return (NULL);
}
