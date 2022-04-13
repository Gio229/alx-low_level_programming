#include "main.h"

/**
 * _isalpha - check if alpha.
 *
 *@c: to be checked.
 *
 * Return: 1 if true 0 else.
 */
int _isalpha(int c)
{

	int i, j;

	for (i = 'a', j = 'A'; i <= 'z', j <= 'Z'; i++, j++)
	{
		if (c == i || c== j)
		{
			return (1);
		}
	}

	return (0);
}
