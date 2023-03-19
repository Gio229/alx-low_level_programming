#include <stdio.h>
#include <stdlib.h>

/**
 * word_counter - cont the number of word
 * in a	string
 * @str: string
 * Return: number of word
 */
int word_counter(char *str)
{
	int i, counter = 0;

	if (!str)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			counter++;
	}
	return (counter);
}

/**
 * wordlen - find length of a word by taking
 * the starting index in a string
 * @s: string
 * @index: index
 * Return: length
 */
int wordlen(int index, char *s)
{
	int i, length = 0;

	for (i = index; (s[i] != '\0' && s[i] != ' '); i++)
		length++;
	return (length);
}

/**
 * get_current_index - find length of a word by taking
 * the starting index in a string
 * @s: string
 * @lastindex: index
 * Return: current index
 */
int get_current_index(int lastindex, char *s)
{
	int current_index = lastindex, i;

	for (i = lastindex; (s[i] != '\0' && s[i] == ' '); i++)
		current_index++;
	return (current_index);
}

/**
 * strtow - splits a string into words.
 *
 * @str: syring
 *
 * Return: array of string or NULL
 */
char **strtow(char *str)
{
	int i, j, width, height, current_index = 0;
	char **word_grid;

	if (str == NULL || *str == '\0')
		return (NULL);

	height = word_counter(str);

	word_grid = malloc(sizeof(*word_grid) * (height + 1));

	if (word_grid == NULL)
		return (NULL);

	current_index = get_current_index(0, str);

	for (i = 0; i < height; i++)
	{
		width = wordlen(current_index, str);
		word_grid[i] = malloc(sizeof(**word_grid) * width + 1);
		if (word_grid[i] == NULL)
		{
			while (i--)
				free(word_grid[i]);
			free(word_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			word_grid[i][j] = str[current_index + j];

		word_grid[i][j] = '\0';

		current_index = get_current_index(current_index + width, str);
	}
	return (word_grid);
}
