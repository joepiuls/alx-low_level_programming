#include "main.h"
/**
 * _isupper - checks if the letter is an uppercase.
 *@c: int representing a character.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
