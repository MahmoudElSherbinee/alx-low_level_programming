#include "function_pointers.h"

/**
* int_index - is a function that prints a name
*
* @array: check the array want to work with it
* @size: is the number of elements of the array
* @cmp: is a pointer to the function you need to use
*
* Return: Nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
