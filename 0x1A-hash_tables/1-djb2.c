#include "hash_tables.h"

/**
 * hash_djb2 - function computes the DJB2 hash value for a given string.
 * This function uses the DJB2 algorithm to generate a hash value for the
 * input string. It initializes the hash value to 5381 and iterates through
 * each character of the string, updating the hash value using the formula
 * hash = ((hash << 5) + hash) + c.
 *
 * @str:  Pointer to the input string for which the hash value is computed.
 *
 * Return: The computed DJB2 hash value for the input string.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash; /* Variable to store the hash value. */
	int c;					/* Variable to store each character of the string. */

	hash = 5381;			/* Initialize the hash value. */

	/* Iterate through each character of the string. */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	/* Return the computed hash value. */
	return (hash);
}
