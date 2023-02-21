#include "main.h"

/**
 *_abs - absolute value
 *
 *@n: to be checked.
 *
 * Return: absolute value of n
 */
int _abs(int n)
{

	if (n > 0)
	{

		return (n);

	}
	else if (n < 0)
	{

		return ((-1) * n);

	}

	return (0);
}
