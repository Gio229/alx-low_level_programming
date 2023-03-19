#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: array length
 * @c: char to init
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
