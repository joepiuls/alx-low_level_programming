#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if the parameter c is a digit.
 *@c : parameter for the digit.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
