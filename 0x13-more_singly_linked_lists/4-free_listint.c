#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *point1, *point2;

	point1 = head;
	while (!(point1 = NULL))
	{
		point2 = point1->next;
		free(point1);
		point1 = point2;
	}
}
