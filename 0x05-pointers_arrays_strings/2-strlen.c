#include "main.h"

/**
 * _strlen - return string length
 *
 * @s: string
 *
 * Return: size of s
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
