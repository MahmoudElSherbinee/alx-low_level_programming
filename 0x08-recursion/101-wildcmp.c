#include "main.h"

/**
* wildcmp_help - master function
*
* @s1: check the input
* @s2: check the input
*
* Return: the required pow
*/

int wildcmp_help(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (wildcmp_help(s1, s2 + 1) || (*s1 != '\0' && wildcmp_help(s1 + 1, s2)))
		{
			return (1);
		}
	}

	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp_help(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
* wildcmp - master function
*
* @s1: check the input
* @s2: check the input
*
* Return: the required pow
*/

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_help(s1, s2));
}
