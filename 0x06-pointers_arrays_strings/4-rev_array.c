#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n:  number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, start, end, middleSize, tmp;

	middleSize = (n / 2);
	start = 0;
	end = (n > 0) ? (n - 1) : 0;
	for (i = 0; i < middleSize; i++)
	{
		if (start == end)
			break;
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
