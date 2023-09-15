#include "lists.h"

/**
 * sum_dlistint - returns the sum of all d data (n)
 * of a 2ly linked list
 *
 * @head: head of d list
 * Return: sum of d data
 */
int sum_dlistint(dlistint_t *head)
{
	int sumation;

	sumation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sumation += head->n;
			head = head->next;
		}
	}

	return (sumation);
}
