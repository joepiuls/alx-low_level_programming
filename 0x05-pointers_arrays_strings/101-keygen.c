#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password for 101-crackme file
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int pword[64], i, sm = 0, m;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pword[i] = rand() % 78;
		sm+= pword[i] + '0';
		putchar(pword[i] + '0');

		if ((2772 - sm) - '0' < 78)
		{
			m = 2772 - sm - '0';
			sm += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
