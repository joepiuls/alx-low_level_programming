#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += *(a + (size * i + i));
		add2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", add1);
	printf("%d\n", add2);
}
