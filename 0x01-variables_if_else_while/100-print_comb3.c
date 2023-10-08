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
	int y = 1;

	while (x <= 8)
{
	while (y <= 9)
{
	putchar(x + '0');
	putchar(y + '0');
	if (x < 8 || y < 9)
{
	putchar(',');
	putchar(' ');
}
	y++;
}
	x++;
	y = x + 1;
}
	putchar('\n');
	return (0);
}
