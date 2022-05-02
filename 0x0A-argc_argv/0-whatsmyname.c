#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s", argv[0]);
	return (0);
}
