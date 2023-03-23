#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameters.
 * @n: total arguments
 * @...: unlimited arguments
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list arguments;

	if (n == 0)
		return (sum);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, unsigned int);

	va_end(arguments);

	return (sum);
}
