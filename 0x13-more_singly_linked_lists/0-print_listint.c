#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *temp = h;

	for (nodes = 0; temp != NULL; temp = temp->next)
	{
		printf("%i\n", temp->n);
		nodes++;
	}
	return (nodes);
}
