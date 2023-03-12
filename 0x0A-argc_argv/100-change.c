#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */
int isInteger(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int number = 0, result = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (isInteger(argv[1]))
	{
		number = atoi(argv[1]);
		while (number > 0 && i <= 4)
		{
			if (number >= coins[i])
			{
				number -= coins[i];
				result++;
			}
			else
			{
				i++;
			}
		}
	}
	printf("%d\n", result);

	return (0);
}
