#include <stdio.h>

/**
 * nLn - this is the master function
 *
 * @n: enable us to write a standard output
 *
 * Return: number of digist in num
 */

int nLn(int n)
{
	int ln = 0;

	if (!n)
		return (1);
	while (n)
{
		n = n / 10;
		ln = ln + 1;
}
	return (ln);
}

/**
 * main - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int c;
	int i;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long sum;
	unsigned long max = 100000000;
	unsigned long fib01 = 0;
	unsigned long fib02 = 0;
	unsigned long sumo = 0;

	for (c = 1; c <= 98; c++)
{
	if (fib01 > 0)
		printf("%lu", fib01);
	i = nLn(max) - 1 - nLn(fib1);
	while (fib01 > 0 && i > 0)
	{
		printf("%d", 0);
		i--;
	}
	printf("%lu", fib1);

	sum = (fib1 + fib2) % max;
	sumo = fib01 + fib02 + (fib1 + fib2) / max;
	fib1 = fib2;
	fib01 = fib02;
	fib2 = sum;
	fib02 = sumo;

	if (c != 98)
		printf(", ");
	else
		printf("\n");
}
	return (0);
}
