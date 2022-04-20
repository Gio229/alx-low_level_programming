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
	int i, j, size, middleSize = 0;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	middleSize = (size / 2);
	for (i = 0; i <= middleSize; i++)
	{
		for (j = (size - (1 + i)); j >= middleSize; j--)
		{
			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
			break;
		}

