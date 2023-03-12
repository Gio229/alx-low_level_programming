#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - check if a string
 * is a palindrome
 * @s: the string
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	int length;

	length = str_len(s);

	if (s == NULL)
		return (1);
	return (palindrome(s, 0, length - 1));
}

/**
 * palindrome - check if characters are same
 * @s: the string
 * @startIndex: first index to check
 * @endIndex: the last index
 * Return: 1 if true else 0
 */
int palindrome(char *s, int startIndex, int endIndex)
{
	if (s == NULL)
		return (1);

	if (s[startIndex] != s[endIndex - startIndex])
		return (0);
	if (startIndex == (endIndex / 2) &&
		s[startIndex] == s[endIndex - startIndex])
		return (1);

	return (palindrome(s, startIndex + 1, endIndex));
}

/**
 * str_len - string length
 * @s: the string
 * Return: the length
 */
int str_len(char *s)
{
	int count = 0;
	char *current;

	current = s;

	for (current = s; *current != '\0'; current++)
		count++;
	return (count);
}
