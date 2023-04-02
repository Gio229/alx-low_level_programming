#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: string name to print
 * @f: pointer to function that perform the task
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
