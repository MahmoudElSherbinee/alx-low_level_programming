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
	char c = '0';

	while (c <= 'f')
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'))
{
	putchar(c);
}
	c++;
}

	putchar('\n');
	return (0);
}
