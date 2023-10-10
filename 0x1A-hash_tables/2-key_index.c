#include "hash_tables.h"

/**
 * key_index - get index at which a key/value
 *      pair should be stored in an array of a hash table.
 * @key: The key to get the index.
 * @size: The size of the array of the hash table.
 *
 * Return: key of the index.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
