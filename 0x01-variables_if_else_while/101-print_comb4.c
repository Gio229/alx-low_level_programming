#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i, j, k;


	for (i = 0; i < 9; i++)
	{
		for (j = (i + 1); j < 10; j++)
		{
			for (k = (j + 1); k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (((i + '0') != 55) || ((j + '0') != 56) || ((k + '0') != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
