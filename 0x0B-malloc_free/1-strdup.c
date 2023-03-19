#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 *
 * @str: string given
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;
	char *str_clone;

	if (str == NULL)
		return (NULL);

	str_clone = malloc(sizeof(str));

	if (str_clone == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str_clone[i] = str[i];

	return (str_clone);
}
