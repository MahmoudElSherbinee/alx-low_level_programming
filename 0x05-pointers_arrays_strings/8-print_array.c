#include "main.h"

/**
* print_array - writes the character c to stdout
* @a: The character to print
* @n: The character to print
* Return: On success 1.
*/

void print_array(int *a, int n)
{
	int i;

		for (i = 0; i < n; i++)

		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
		printf("\n");
}
