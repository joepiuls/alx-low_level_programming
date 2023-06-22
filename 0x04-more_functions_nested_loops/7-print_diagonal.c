#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the value n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
