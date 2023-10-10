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
	if (i % 2 == 1)
{
		fib1 = fib1 + fib2;
		printf("%ul, ", fib1);
}
	else
{
		fib2 = fib1 + fib2;
		print("%ul, ", fib2);
}
	i++;
}
	printf("\n");
	return (0);
}
