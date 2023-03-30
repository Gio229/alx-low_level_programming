#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list
 * @str: content
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *current;
	list_t *new;

	for (len = 0; str[len] != '\0'; len++)
		;
	/* setup the node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	current = *head;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (new);
}
