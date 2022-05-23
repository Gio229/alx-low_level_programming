#include "main.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: list
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;
	const listint_t *temp = h;

	for (nbr = 0; temp != NULL; temp = temp->next)
	{
		nbr++;
	}
	return (nbr);
}
