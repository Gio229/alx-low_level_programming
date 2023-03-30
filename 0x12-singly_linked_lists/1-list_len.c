#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - find the number of elements in a linked list_t list.
 * @h: list
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int number = 0;
	const list_t *current;

	for (current = h; current != NULL; current = current->next)
		number++;

	return (number);
}
