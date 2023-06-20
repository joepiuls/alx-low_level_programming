#include <stdio.h>
#include "main.h"

/**
 * main - Prints message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, sz;

	sz = sizeof(str) / sizeof(int);
	for (i = 0; i < sz; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
