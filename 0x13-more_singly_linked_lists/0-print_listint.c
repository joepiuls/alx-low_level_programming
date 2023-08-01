#include "lists.h"

/**
 * print_listint - print all elemement to stdout
 * @h: pointer to a singly liked list.
 * Return: an int.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *point;
	unsigned int ptr = 0;

	point = h;
	while (point)
	{
		printf("%d\n", point->n);
		ptr++;
		point = point->next;
	}
	return (cntr);
}
