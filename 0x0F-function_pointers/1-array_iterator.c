#include "function_pointers.h"

/**
* array_iterator - is a function that prints a name
*
* @array: check the array want to work with it
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
