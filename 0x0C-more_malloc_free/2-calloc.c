#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element in the array
 * @size: element byte size
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *table;
	unsigned int gSize = nmenb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	table = malloc(gSize);

	if (table == NULL)
		return (NULL);
	for (i = 0; i < gsize; i++)
		table[i] = 0;
	return (table);
}
