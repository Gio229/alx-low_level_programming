#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list
 * @idx: index
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *current;
	dlistint_t *new;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	current  = *h;
	while (current != NULL)
	{
		if (counter == 0 && idx == 0)
		{
			new->next = current;
			current->prev = new;
			*h = new;
			return (new);
		}
		else if (counter == idx)
		{
			current->prev->next = new;
			new->next = current;
			current->prev = new;
			return (new);
		}
		counter += 1;

		current = current->next;
	}
	free(new);
	return (NULL);
}
