#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: the head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
