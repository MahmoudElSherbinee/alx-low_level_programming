#include <stdio.h>

/**
 * main - this is the master function
 *
 * Description: Putchar() enable us to print a character
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
{
	if (c == 'e')
{
	c = c + 1;
}
	else if (c == 'q')
{
	c = c + 1;
}
	else
{
	putchar(c);
	c = c + 1;
}
};
	putchar('\n');
	return (0);
}
