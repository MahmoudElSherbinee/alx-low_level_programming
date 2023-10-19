#include "main.h"

/**
* reverse_array - the master function
*
* @a: check the input1
*
* @n:check the input2
*
*/

void reverse_array(int *a, int n)
{
	int start;

	start = 0;

	while (start < n)
	{
		int swap;

		swap = a[start];

		a[start] = a[n - 1];
		a[n - 1] = swap;
		start++;
		n--;
	}
}
