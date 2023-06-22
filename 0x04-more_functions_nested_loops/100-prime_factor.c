#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int i= 612852475143;
	long int j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}
