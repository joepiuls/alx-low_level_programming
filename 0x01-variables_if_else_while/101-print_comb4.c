#include <stdio.h>
/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a, b;

	i = 48;
	a = 48;
	b = 48;

	while (a < 58)
	{
		i = 48;
		while (i < 58)
		{
			b = 48;
			while (b < 58)
			{
				if (a != i && b != b && i != b && a < i && i < b)
				{
					putchar(a);
					putchar(i);
					putchar(b);
					if (i == 56 && b == 55 && a == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				b++;
			}
			i++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
