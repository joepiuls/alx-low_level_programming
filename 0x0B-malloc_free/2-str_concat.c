#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	nstr = malloc(sizeof(char) * (i + j + 1));

	if (nstr == NULL)
	{
		free(nstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		nstr[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		nstr[k] = s2[j];

	return (nstr);
}
