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
	int fib1 = 1;
	int fib2 = 2;

	printf("%d, %d, ", fib1, fib2);
	for (int i = 3; i <= n; i++)
{
		int next = fib1 + fib2;

		if (i == n)
{
		printf("%d\n", next);
}
		else
{
			printf("%d, ", next);
}
		fib1 = fib2;
		fib2 = next;
}
	return (0);
}
