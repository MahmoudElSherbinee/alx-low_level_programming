#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @x: check for input number
 * Return: square root of x
*/

double _sqrt(double x)
{
	double sqrt;
	double tmp;

	tmp = 0;
	sqrt = x / 2;

	while (sqrt != tmp)
{
	tmp = sqrt;
	sqrt = (x / tmp + tmp) / 2;
}
	return (sqrt);
}

/**
 * find_largest_prime_factor - Find the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 *
 * Description:
 * This function takes an integer 'n' as input
 * It first checks for divisibility by 2
 * other prime factors. The largest prime factor found is returned.
 *
 * Return: The largest prime factor of 'n'.
*/

long find_largest_prime_factor(long n)
{
	long largest_prime;
	long i;

	largest_prime = -1;
	while (n % 2 == 0)
{
	largest_prime = 2;
	n /= 2;
}
	for (i = 3; i <= _sqrt(n); i += 2)
{
	while (n % i == 0)
{
	largest_prime = i;
	n /= i;
}
}
	if (n > 2)
{
	largest_prime = n;
}
	return (largest_prime);
}

/**
 * main - Entry point of the program.
 *
 * Description:
 * This function calculates and prints the largest prime factor
 * It calls the find_largest_prime_factor function
 * Return: Always returns 0.
*/

int main(void)
{
	long number;
	long largest_prime;

	number = 612852475143;
	largest_prime = find_largest_prime_factor(number);
	printf("%ld\n", largest_prime);
	return (0);
}
