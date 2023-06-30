#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	char buffer[10];
	int j, i = 0;
	
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
