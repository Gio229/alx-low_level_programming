#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == 0)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		array[i] = min + i;

	return (array);
}
