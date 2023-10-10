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
	int n = 98;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	int i = 3;

	printf("%lu, %lu, ", fib1, fib2);

	while (i <= n)
{
		int next = fib1 + fib2;

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
		i++;
}
	return (0);
}
