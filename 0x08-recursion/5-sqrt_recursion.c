#include "main.h"

/**
 * sqr - find the square root
 *
 * @n: int
 * @init: int
 *
 * Return: int
 */
int sqr(int n, int init)
{
	if (init * init == n)
		return (init);
	else if (init * init < n)
		return (sqr(n, init + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
