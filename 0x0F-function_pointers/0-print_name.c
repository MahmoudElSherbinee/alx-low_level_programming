#include "function_pointers.h"
/**
* print_name - is a function that prints a name
*
* @name: check the name want to be printed
* @f: is the function pointer that points to the function wanted to be run
*
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
