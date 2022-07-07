#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - calculate a sum
 * @head: list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	if (head == NULL)
		return (sum);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
