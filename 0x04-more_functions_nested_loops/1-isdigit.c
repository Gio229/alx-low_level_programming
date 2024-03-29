#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: digit to check
 *
 * Return: 1 if true 0 else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
