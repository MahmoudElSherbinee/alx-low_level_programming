#include "main.h"

/**
* string_length - master function
*
* @s: check the input
*
* Return: the required pow
*/

int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}

/**
* is_palindrome_helper - master function
*
* @s: check the input
* @start: check the input
* @end: check the input
*
* Return: the required pow
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
* is_palindrome - master function
*
* @s: check the input
*
* Return: the required pow
*/

int is_palindrome(char *s)
{
	int len = string_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, len - 1));
}
