#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 * @s1: dtring 1
 * @s2: string 2
 * @n: n digit
 * Return: a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	;

	if (n < len_s2)
		str = malloc(len_s1 + n * sizeof(char) + 1);
	else
		str = malloc(len_s1 + len_s2 + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
