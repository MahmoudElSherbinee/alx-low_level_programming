#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints the numbers from 1 to 100
 *
 * @size: count from 1 to 100 with Fizz Bizz FizzBuzz
 *
 * Return: 0 Always (success)
*/

void print_triangle(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size - i - 1; j++)
{
	_putchar(' ');
}
	for (int k = 0; k < i + 1; k++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
