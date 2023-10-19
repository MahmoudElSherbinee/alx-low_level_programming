#include "main.h"

/**
* string_toupper - the master function
*
* @n:check the input2
*
*/

char *string_toupper(char *n)
{
	for (int i = 0; n[i] != '\0'; i++)

	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
