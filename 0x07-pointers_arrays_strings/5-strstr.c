#include "main.h"

/**
* _strstr - function that locates a substring.
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *findneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = findneedle;
		result++;
		haystack = result;
	}
	return (0);
}
