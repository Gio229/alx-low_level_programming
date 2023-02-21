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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (c == j)
		{
			return (1);
		}
	}

	return (0);
}
