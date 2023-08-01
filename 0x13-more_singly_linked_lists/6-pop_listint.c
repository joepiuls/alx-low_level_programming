#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - pop the first element in a linked list.
 * @head: Pointer to a list.
 * Return: Integer(the value of the popped list)
 **/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int lists_value;

	if (!(*head != NULL))
		return (0);

	ptr = *head;
	*head = ptr->next;
	lists_value = ptr->n;
	free(ptr);
	return (lists_value);
}
