#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: array pointer.
 * @n: size of the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int c;

	while (c < n)
	{
		n--;
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		i++;
	}
}
