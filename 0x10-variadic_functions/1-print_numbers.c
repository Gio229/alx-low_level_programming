#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: total arguments
 * @...: unlimited arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	int element;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		element = va_arg(arguments, int);
		printf("%d", element);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
