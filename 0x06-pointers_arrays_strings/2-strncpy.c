#include "main.h"

/**
 * _strncpy - copy an array
 *
 * @dest: array destination
 * @src: array source
 * @n: number of digit from src
 *
 * Return: array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
