#include <unistd.h>

/**
 *main - the master function
 *Description: using write with parameters
 *Return: 1 fail code
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
