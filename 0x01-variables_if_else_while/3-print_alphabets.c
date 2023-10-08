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
	/*putchar() print a character*/
	char c;

	c = 'a';

	while (c <= 'z')
{
	putchar(c);

	c = c + 1;
};
	/*Upper case*/
	char x;

	x = 'A';

	while (x <= 'Z')
{
	putchar(x);

	x = x + 1;
};
	putchar('\n');
	return (0);
}
