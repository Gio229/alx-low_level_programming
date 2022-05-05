#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string given
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, size;
	char *copy;

	for (size = 0; str[size] != '\0; size++)
		;
	copy = malloc(size * sizeof(*str) + 1);

	if (str == NULL || copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];
	return (copy);
}
