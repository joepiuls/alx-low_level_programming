#include "main.h"
/**
*print_sign - This checks if the number is greater than zero, equal to zero and less*than zero.
*return : returns 1 if n=0, 0 if n=0, -1 if n=-1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return ("-1");
	}
	else
	{
		_putchar('0');
		return ('0');
	}
}
