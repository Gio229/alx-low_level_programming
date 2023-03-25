#include <stdlib.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: char *
 * @s2: char *
 * @n: unsigned int
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j;
	char *newer_string;

	if (n < (_strlen(s2)))
		newer_string = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	else
		newer_string = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (newer_string == NULL)
		return (NULL);

	for (i = 0; i < (_strlen(s1)); i++)
		newer_string[i] = s1[i];

	for (j = 0; j < n; i++, j++)
		newer_string[i] = s2[j];

	newer_string[i] = '\0';

	return (newer_string);
}
