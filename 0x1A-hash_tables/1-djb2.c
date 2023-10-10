#include "hash_tables.h"

/**
 * hash_djb2 - functionthat implements the djb2 algorithm.
 * @str: string used for generating hash value
 *
 * Return: The hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hs;
	int i;

	hs = 5381;

	while ((i = *str++))
		hs = ((hs << 5) + hs) + c; /* hs * 33 + c */

	return (hs);
}
