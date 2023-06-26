#include "main.h"
/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */
void rev_string(char *s)
{
	int i, j, len;
	char w1, w2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = len - 1;
	i = 0;
	while (j > i)
	{
		w1 = s[i];
		w2 = s[j];
		s[i] = w2;
		s[j] = w1;
		j--;
		i++;
	}
}
