#include "main.h"
/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */
void print_rev(char *s)
{
	int i, length;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
