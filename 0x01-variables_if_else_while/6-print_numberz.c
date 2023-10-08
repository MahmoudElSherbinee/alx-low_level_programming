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
	putchar(a + '0');
	a++;
}
	putchar('\n');
	return (0);
}
