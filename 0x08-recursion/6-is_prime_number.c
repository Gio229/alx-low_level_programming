#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - check if the input integer
 * is a prime number
 * @n: the number
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	int result;
	int positive_init;

	if (n < 0)
		positive_init = (n * (-1));
	else
		positive_init = n;

	if (positive_init == 1 || positive_init == 0)
		return (0);

	result = prime_number(positive_init, positive_init - 1);

	return (result);
}

/**
 * prime_number - check if the input integer
 * is a prime number by dividing by
 * another integer
 * @positive_init: the initial number
 * @divider: the divider
 * Return: 1 if true else 0
 */
int prime_number(int positive_init, int divider)
{
	if (divider != 1 && (positive_init % divider == 0))
		return (0);

	if (divider != 1)
		return (prime_number(positive_init, divider - 1));

	return (1);
}
