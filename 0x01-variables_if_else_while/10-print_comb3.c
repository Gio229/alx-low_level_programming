#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i,j;


	for (i = 0; i < 9; i++)
	{
		for (j = (i + 1); j < 10; i++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != 56) && (j != 57))
			{
				putchar(44);
				putchar(32);
			}
			
	}

	putchar('\n');

	return (0);
}
