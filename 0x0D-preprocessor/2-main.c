#include <stdio.h>

/**
* main - the main function that prints the name of
*  the file it was compiled from, followed by a new line
*
* Description: using the __file__
*
* Return: 0 Always success
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
