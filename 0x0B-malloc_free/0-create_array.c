#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: array length
 * @c: specific char
 * Return: pointer or Null
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
