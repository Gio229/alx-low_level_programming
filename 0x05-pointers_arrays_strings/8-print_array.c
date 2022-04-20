#include "main.h"

/**
 * print_array - print array elements
 *
 * @a: array
 * @n: number of element
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);

	}
}
