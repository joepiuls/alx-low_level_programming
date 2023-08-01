#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: first node address of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int totalsum = 0;

	while (head != NULL)
	{
		totalsum += head->n;
		head = head->next;
	}
	return (totalsum);
}
