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
	int y;

	while (x <= 99)
{
	y = x;
	while (y <= 99)
{
	if (y != x)
{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (x != 98 || y != 99)
{
	putchar(',');
	putchar(' ');
}
}
	y++;
}
	x++;
}
	putchar('\n');
	return (0);
}
