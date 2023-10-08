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
	char z;

	z = 'z';

	while (z >= 'a')
{
	putchar(z);
	z--;
	if (z == 'a' - 1)
{
	break;
}
}
	putchar('\n');
	return (0);
}
