#include "hash_tables.h"
#include <string.h>

/**
 * create_node - Creates a new hash node
 * @key: Key to add (cannot be an empty string)
 * @value: Value associated with the key
 *
 * Return: Pointer to the new node, or NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

/**
 * update_node_value - Updates the value of an existing hash node
 * @node: Pointer to the node to update
 * @value: New value to set
 *
 * Return: 1 if successful, 0 otherwise
 */
int update_node_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add (cannot be an empty string)
 * @value: Value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (update_node_value(temp, value));
		temp = temp->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
