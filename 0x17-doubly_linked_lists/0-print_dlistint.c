#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: doubly list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t * current;

	if (h == NULL)
		return (counter);

	current = h;

	while (current != NULL)
	{
		counter += 1;
		printf("%i\n", current->n);
		current = current->next;
	}
	return (counter);
}
