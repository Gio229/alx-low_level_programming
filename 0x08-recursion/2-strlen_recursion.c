#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int cpt = 0;

	if (*s == '\0')
		return (0);
	cpt = 1 + _strlen_recursion(s + 1);

	return (cpt);
}
