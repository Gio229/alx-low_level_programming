#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t linked list.
 * @head: list
 * @index: the index
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter += 1;
		current = current->next;
	}

	return (NULL);
}
