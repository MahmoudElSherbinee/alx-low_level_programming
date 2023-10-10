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
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;
	unsigned long sum = 0;

	while (fib1 <= 4000000)
{
	if (fib1 % 2 == 0)
{
		sum += fib1;
}
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
}
	printf("%lu\n", sum);
	return (0);
}

