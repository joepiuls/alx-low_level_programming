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
	char *passwd = malloc(65 * sizeof(char));
	int i;

	for (i = 0; i <= 65; i++)
	{

	int character = rand() % 94 + 33;

	passwd[i] = character;

	}

	printf("%s", passwd);
	return (0);
}
