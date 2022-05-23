#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 *
 * @head: the head
 * @n: value of the new node
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (temp)
	{
		while (temp && temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
