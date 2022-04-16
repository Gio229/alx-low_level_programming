#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			k = j / 10;
			if (k != 0)
				_putchar('0' + k);
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
