#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 *
 * @b: int
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
