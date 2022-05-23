#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif
