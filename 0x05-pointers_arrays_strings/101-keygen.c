#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 65
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *passwd = malloc(PASSWORD_LENGHT * sizeof(char));
	int i;

	for (i = 0; i <= PASSWORD_LENGHT; i++)
	{

	int character = rand() % 94 + 33;

	passwd[i] = character;

	}

	printf("%s", passwd);
	return (passwd);
}
