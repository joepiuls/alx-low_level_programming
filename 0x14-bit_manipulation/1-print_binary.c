#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int c_num;

	for (i = 63; i >= 0; i--)
	{
		c_num = n >> i;

		if (c_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
