#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
