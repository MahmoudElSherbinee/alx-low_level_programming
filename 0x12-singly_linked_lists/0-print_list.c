#include "lists.h"

/**
* length - is a function that takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* @s: check the input
*
* Return: 0 always success
*/

int length(char *s)
{
	int i;

	int length = 0;

	if (!s)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * print_list - Prints the elements of a linked list.
 *
 * This function traverses a linked list
 * and prints the elements along with their
 * respective indices. If the element is a NULL string, it prints "(nil)".
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", length(h->str));
		}
		else
		{
			printf("[%d] %s\n", length(h->str), h->str);
		}
		h = h->next;
	}
	return (i);
}
