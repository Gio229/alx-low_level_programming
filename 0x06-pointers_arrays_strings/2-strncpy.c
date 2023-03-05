#include "main.h"

/**
 * _strncpy - copy copies a string.
 *
 * @dest: array destination
 * @src: array source
 * @n: number of digit from src
 *
 * Return: array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_size = 0;

	for (i = 0; src[i] != '\0'; i++)
		src_size++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (i == src_size)
		dest[i] = '\0';
	return (dest);
}