#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find node at position index in a list.
 * @head:  first node address in a list.
 * @index: Position of a the node to find (starting from 0).
 * Return: Pointer to the found node
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
