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
	char *passwd = malloc(15 * sizeof(char));
	int i;

	for (i = 0; i <= 15; i++)
	{

	int character = rand() % 94 + 33;

	passwd[i] = character;

	}

	printf("%s", passwd);
	return (0);
}
