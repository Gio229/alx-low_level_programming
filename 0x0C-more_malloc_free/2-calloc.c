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

	if (nmemb == 0 || size == 0)
		return (NULL);
	table = malloc(nmemb * size);

	if (table == NULL)
		return (NULL);

	return (table);
}
