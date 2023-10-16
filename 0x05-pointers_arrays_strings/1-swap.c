#include "main.h"

/**
* swap_int - is a function that takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* @a: check the input
*
* @b: check the input
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
