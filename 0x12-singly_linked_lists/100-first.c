#include "lists.h"

/**
* before_main - Function marked as a constructor
*to execute before the main function.
*
* This function is marked with the __attribute__((constructor)) attribute,
* ensuring its execution before the main function is called. It prints the
* following lines to the standard output:
* "You're beat! and yet, you must allow,"
* "I bore my house upon my back!"
* These lines serve as an introduction before the main function is executed.
*/

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
