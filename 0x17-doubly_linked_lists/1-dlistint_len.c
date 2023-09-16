#include "lists.h"

/**
 * dlistint_len - count the num of nodes in d linked list
 * @h: ptr to d beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
