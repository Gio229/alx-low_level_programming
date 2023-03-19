#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using
 * malloc and exit if failed
 *
 * @b: int
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
