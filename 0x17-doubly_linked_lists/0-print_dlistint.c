#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all d elements of a dlistint_t list
 * @h: ptr to the start of d linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
