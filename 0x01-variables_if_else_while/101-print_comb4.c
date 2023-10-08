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
	int z;

	while (x <= 7)
{
	y = x + 1;
	while (y <= 8)
{
	z = y + 1;
	while (z <= 9)
{
	putchar(x + '0');
	putchar(y + '0');
	putchar(z + '0');
	if (x < 7 || y < 8 || z < 9)
{
	putchar(',');
	putchar(' ');
}
	z++;
}
	y++;
}
	x++;
}
	putchar('\n');
	return (0);
}
