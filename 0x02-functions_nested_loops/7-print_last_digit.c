#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;
	if (n<0)
	n = -n;
	l = n % 10;
	if(l<0)
	a=-a;
	_putchar(a + '0');
	return(a);
		
}
