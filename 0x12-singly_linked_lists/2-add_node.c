#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list
 * @str: content
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* duplicate str */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
