#include "main.h"

/**
* print_diagsums - prints buffer
*
* @a: check the input1
* @size: check the input2
*
* Return: Nothing.
*/

void print_diagsums(int *a, int size)
{
	int i;

	int primary_sum = 0;

	int secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i];
		secondary_sum += a[size - i - 1];
		a += size;
	}
	printf("%d, ", primary_sum);
	printf("%d\n", secondary_sum);
}
