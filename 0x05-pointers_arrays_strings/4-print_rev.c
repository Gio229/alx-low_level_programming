#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != 0; i++)
		size++;
	for (i = (size - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
