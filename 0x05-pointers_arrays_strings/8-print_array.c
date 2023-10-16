#include "main.h"

/**
* print_array - writes the character c to stdout
* @a: check the input
*
* @n: check the input
* Return: On success 1.
*/

void print_array(int *a, int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)

		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
}
