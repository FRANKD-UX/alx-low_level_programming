#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Prints the key-value pairs in the hash table in the order
 * they appear in the array. If ht is NULL, it prints nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
