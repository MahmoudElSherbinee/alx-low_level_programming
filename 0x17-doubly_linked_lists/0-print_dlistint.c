#include "lists.h"

/**
 * print_dlistint - Prints the elements of a
 * doubly linked list and counts nodes.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the doubly linked list until the */
	/* end is reached (head is NULL) */
	while (h)
	{
		/* Increment count for each node encountered */
		count++;
		/* Print the value of the current node */
		printf("%d\n", h->n);
		/* Move to the next node in the list */
		h = h->next;
	}
	return (count);
