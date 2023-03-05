#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, start, end, size = 0, middleSize;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	middleSize = (size / 2);
	start = 0;
	end = (size > 0) ? (size - 1) : 0;
	for (i = 0; i < middleSize; i++)
	{
		if (start == end)
			break;
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
