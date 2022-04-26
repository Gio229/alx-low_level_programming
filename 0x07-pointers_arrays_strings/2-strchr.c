#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character @c
 */
char *_strchr(char *s, char c)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
		size++;

	for (i = 0; i <= size; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
