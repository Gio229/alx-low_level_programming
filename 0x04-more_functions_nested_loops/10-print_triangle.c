#include "main.h"

/**
 * print_triangle - print a triangle,
 * followed by a new line.
 *
 * @size: triangle size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((size - i - 1) > j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
