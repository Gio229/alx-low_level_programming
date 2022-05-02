#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc >= 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
