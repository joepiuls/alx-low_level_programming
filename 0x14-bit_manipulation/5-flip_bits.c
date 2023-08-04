#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int n_flip = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (i = 0; i < k; i++)
	{
		if ((m & 1) != (n & 1))
			n_flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (n_flip);
}
