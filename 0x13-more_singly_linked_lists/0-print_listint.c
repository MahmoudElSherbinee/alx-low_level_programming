#include "lists.h"

/**
* print_listint - Prints the elements of a linked list of integers.
*
* @h: A pointer to the head of the linked list.
*
* Return: The number of nodes in the linked list.
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	/*
	* Iterate through the linked list using a loop.
	* Print the value of each node and
	* update the pointer to move to the next node.
	*/
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
