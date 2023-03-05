#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bit from @src
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}

	dest[c++] = '\0';

	return (dest);
}
