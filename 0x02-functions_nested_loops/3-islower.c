#include "main.h"

/**
 * _islower - check if is lower.
 *
 *@c: to be checked.
 *
 * Return: 1 if true 0 else.
 */
int _islower(int c)
{

	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
