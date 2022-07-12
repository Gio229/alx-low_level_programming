#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 * @s1
 * @s2
 * @n
 * Return: a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int len_s1;
	int len_s2;
	char * str;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
        ;

	if (n < len_s2)
		str = malloc(len_s1 + n * sizeof(char) + 1);
	else
		str = malloc(len_s1 + len_s2 + 1);
	if (str == 0)
		reurn (NULL);

	for (i = 0; s1[i] != '\0'; i+)
		str[i] = s1[i];
	while (s2[i] != '\0')
		str[i] = s2[i];
	str[i] = '\0';

	return(str);
}
