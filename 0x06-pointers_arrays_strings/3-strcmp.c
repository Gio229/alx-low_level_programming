#include "main.h"

/**
 * _strcmp -  compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp = 0, size1 = 0, size2 = 0, size = 0;

	for (i = 0; s1[i] != '\0'; i++)
		size1++;

	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	size = (size1 >= size2) ? size1 : size2;

	for (i = 0; i < size; i++)
	{
		cmp = s1[i] - s2[i];
		if (cmp != 0)
			return (cmp);
	}

	return (cmp);
}
