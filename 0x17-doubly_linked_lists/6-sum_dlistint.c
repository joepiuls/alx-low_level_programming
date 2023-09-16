#include "lists.h"

/**
 * sum_dlistint - sums all of d data of a dlistint_t linked list
 * @head: ptr to the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;

	while (head != NULL)
	{
		sum_total += head->n;
		head = head->next;
	}
	return (sum_total);
}
