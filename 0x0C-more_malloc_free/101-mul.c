#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* is_digit - function to make sure that the input is digit
*
* @str: check the input
*
* Return: 0 if the input is digit, 1 if it is not
*/
int is_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
* calculate_length - function to get the length of the input
*
* @str: check the input
*
* Return: the length of the input
*/
int calculate_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* handle_error - function to handle the error
*
* Description: this function works if there was any error
*
* Return: Nothing only exit from the program
*/
void handle_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - The master function the multiplies two positive numbers
*
* @argc: check the number of inputs
* @argv: check the value of the input
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{char *number1, *number2;
	int len1, len2, total_len, i, carry, digit1, digit2, *result, nonzero = 0;

	number1 = argv[1];
	number2 = argv[2];
	if (argc != 3 || !is_digit(number1) || !is_digit(number2))
		handle_error();
	len1 = calculate_length(number1);
	len2 = calculate_length(number2);
	total_len = len1 + len2 + 1;
	result = malloc(sizeof(int) * total_len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = number1[len1] - '0';
		carry = 0;
		for (len2 = calculate_length(number2) - 1; len2 >= 0; len2--)
		{
			digit2 = number2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (result[i])
			nonzero = 1;
		if (nonzero)
			_putchar(result[i] + '0');
	}
	if (!nonzero)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
