#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, size = 0, middleSize;

	for (i = 0; str[i] != '\0'; i++)
		size++;
	middleSize = (size % 2 == 1) ? ((size + 1) / 2) : (size / 2);

	for (i = middleSize; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
