#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Frees all nodes in the hash table and then the table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	/* Loop through each index of the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Free all nodes in the linked list at this index */
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	/* Free the array and the hash table struct */
	free(ht->array);
	free(ht);
}
