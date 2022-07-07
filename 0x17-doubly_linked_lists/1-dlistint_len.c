#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - find the number of elements in a linked dlistint_t list.
 * @h: list
 * Return: the number of elements in @h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current;

	if (h ==  NULL)
		return (counter);
	current = h;

	while (current != NULL)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}
