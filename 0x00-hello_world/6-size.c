#include <stdio.h>
/**
 * main - entry point
 * Return: 0 at the end of the function
*/
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of along long int: %d byte(s)", sizeof(long long int));
	printf("Size of float: %d byte(s)", sizeof(float));
	return (0);
}
