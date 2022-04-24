#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}

	dest[c++] = '\0';

	return (dest);
}
