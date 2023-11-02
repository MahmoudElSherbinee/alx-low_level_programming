#include "main.h"

/**
* array_range - fuction that making memory allocation
*
* @min: check min value
* @max: check max value
*
* Return: array_range
*/

int *array_range(int min, int max)
{
	int i;

	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
