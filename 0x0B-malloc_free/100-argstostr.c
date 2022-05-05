#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: argc
 * @av: argv
 *
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, concat_size = 0, cmpt = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, concat_size++)
		concat_size += _strlen(av[i]);

	concat = malloc(sizeof(char) * concat_size + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			concat[cmpt] = av[i][j];

		concat[cmpt] = '\n';
		cmpt++;
	}
	concat[cmpt] = '\0';
	return (concat);
}
