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
	int x = 0;

	while (x <= 9)
{
	putchar(x + '0');
	putchar(',');
	putchar(' ');
	x = x + 1;
	if (x == 9)
{
	putchar(x + '0');
	break;
}
}
	return (0);
}
