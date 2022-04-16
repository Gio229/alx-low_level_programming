#include "main.h"

/**
 * _isdigit - verify if is a digit
 *
 * @c: parameter to check
 *
 * Return: 1 if true 0 else
 */
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
