#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sm, n;

	sm = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sm += (pass[i] + '0');
		printf(pass[i]);
		if ((2772 - sm) - '0' < 78)
		{
			n = 2772 - sm - '0';
			sm += n;
			printf("%d", n);
			break;
		}
	}

	return (0);
}
