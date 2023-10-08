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
	/*putchar() print a character*/
	char c;

	c = 'a';

	while (c <= 'z')
{
	putchar(c);
	putchar('\n');
	c = c + 1;
};
	return (0);
}
