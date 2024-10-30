#include "hash_tables.h"

/**
 * key_index - Computes the index of a key for a hash table
 * @key: Pointer to the key (string) to hash
 * @size: Size of the array in the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
