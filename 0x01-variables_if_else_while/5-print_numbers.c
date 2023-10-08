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
	int a = 0;

	while (a < 10)
{
	printf("%d", a);
	a++;
}
	printf("\n");
	return (0);
}
