#include <stdio.h>

/**
 * main - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 50;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;

	printf("%lu, %lu, ", fib1, fib2);
	for (int i = 3; i <= n; i++)
{
	next = fib1 + fib2;

	if (i == n)
{
	printf("%lu\n", next);
}
	else
{
	printf("%lu, ", next);
}
	fib1 = fib2;
	fib2 = next;
}
	return (0);
}

