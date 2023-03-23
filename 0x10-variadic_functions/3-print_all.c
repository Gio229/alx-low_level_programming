#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: total arguments
 * @...: unlimited arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	char *element;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		element = va_arg(arguments, int);
		if (element == NULL)
			printf("%s", element);
		else
			printf("%s", "(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
