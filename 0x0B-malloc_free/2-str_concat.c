#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2, size;
	char *concat;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	size = size1 + size2;
	concat = malloc(size * sizeof(char) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i < size1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - size1];
	}
	return (concat);
}
