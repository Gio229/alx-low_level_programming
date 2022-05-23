#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 *
 * @head: the head
 *
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (head ==  NULL)
		return (0);

	temp = *head;
	if (temp == NULL)
		return (0);
	node_data = temp->n;
	*head = temp->next;
	free(temp);

	return (node_data);
}
