#include <stdio.h>

/**
 * print_binary - function prints the binary
 * representation of an unsigned long integer.
 *
 * This function takes an unsigned long integer as input and prints its binary
 * representation. Leading zeros are omitted,
 * and the function prints '0' if the input is 0.
 *
 * @n: The unsigned long integer to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		putchar('0');
	}
	else
	{
		int size = sizeof(unsigned long int) * 8;
		int leading_zeros = 1; /* Flag to track leading zeros */

		for (i = size - 1; i >= 0; i--)
		{
			unsigned long int mask = 1UL << i;

			/* Check if the i-th bit is set or not */
			if ((n & mask) != 0)
			{
				leading_zeros = 0; /* Set flag to indicate no more leading zeros */
				putchar('1');
			}
			else
			{
				if (!leading_zeros)
				{
					putchar('0');
				}
			}
		}
	}
}
