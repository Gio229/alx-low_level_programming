#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the head
 * @index: the index
 *
 * Return: node nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp == head;

	while (index != 0)
	{
		if (temp == NULL)
			return (NULL);
		index--;
		temp = temp->next;
	}
	return (temp);
}
