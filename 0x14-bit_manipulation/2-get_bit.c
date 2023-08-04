#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal parameter
 * @index: index value
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	bitvalue = (n >> index);
	if (index > 32)
	return (-1);
	return (bitvalue & 1);
}
