#include "main.h"
/*
*_isalpha checks if the number is an alphabet.
*return - returns 1 if c is letter and 0 if otherwise.
*/
int _isalpha(int c)
{
	/*checks if the letter is an alphabet*/
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
