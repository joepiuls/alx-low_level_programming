#include "main.h"
/**
 *_strncat - concatenates n bytes from a string to another
 * @src: is a string appended to dest.
 * @n: number of bytes of str to concatenate
 * @dest: string to append to.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

