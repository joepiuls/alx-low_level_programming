#include <stdio.h>
#include <stdlib>
#include "main.h"
/**
 * create_array - creates an array of characters.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cht;
	unsigned int i;

	if (size == NULL)
		return (NULL);

	cht = malloc(sizeof(c) * size);

	if (cht == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cht[i] = c;

	return (cht);
}
