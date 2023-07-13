#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int rng, i;
	int *p;

	rng = 0;

	if (min > max)
		return (NULL);

	rng = ((max + 1) - min);

	p = malloc(rng * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < rng; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}

