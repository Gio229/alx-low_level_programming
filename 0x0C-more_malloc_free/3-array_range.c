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
	int i, len, mi, ma;

	if (min > max)
		return (NULL);
	if (min < 0)
		mi = min * (-1);
	else
		mi = min;
	if (max < 0)
		ma = max * (-1);
	else
		ma = max;

	len = (ma - mi) + 1;

	array  = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
