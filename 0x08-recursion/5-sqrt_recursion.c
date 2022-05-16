#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - ind the the square root
 *
 * @n: int
 * @init: int
 *
 * Return: square root
 */
int _sqrt(int n, int init)
{
	if (init * init == n)
		return (init);
	else if (init  * init < n)
		return (_sqrt(n, init + 1));
	else
		return (-1);
}
