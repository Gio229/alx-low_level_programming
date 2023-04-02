#include "3-calc.h"

/**
 * main - performs simple calculate operations.
 *	@argc: arguments number
 *	@argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	int num1, num2, result;
	char *operator;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/') || (*operator == '%'))
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);

	return (0);
}
