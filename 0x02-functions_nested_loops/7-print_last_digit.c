#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (n < 0)
{
	n = -n;
	l = -l;
	_putchar(l + '0');
}
else
{
	_putchar(l + '0');
}
return (l);
}

