#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node
 *
 * @head: ptr to head node
 *
 * @index: int
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
