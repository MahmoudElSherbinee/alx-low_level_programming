#include "main.h"

/**
* flip_bits - Returns the number of bits
* to flip to convert one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	unsigned int count = 0;

	/* Count the number of set bits in xor_result */
	while (xor_result != 0)
	{
		/* Increment count if the rightmost bit is set */
		count += xor_result & 1;
		/* Right shift xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}
