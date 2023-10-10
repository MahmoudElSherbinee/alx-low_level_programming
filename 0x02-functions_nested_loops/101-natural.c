#include <stdio.h>

/**
 * main - function is the master function
 *
 * Description: computes and prints the sum of all the multiples
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum = 0;
	int i = 3;

	while (i < 1024)
{
	if (i % 3 == 0 || i % 5 == 0)
{
	sum += i;
}
}
	printf("%d\n", sum);
	return (0);
}
