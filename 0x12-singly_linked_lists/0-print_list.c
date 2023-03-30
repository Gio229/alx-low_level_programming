#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t number_nodes = 0;
	const list_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		number_nodes++;
	}
	return (number_nodes);
}
