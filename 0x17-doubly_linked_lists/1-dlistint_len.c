#include "lists.h"
/**
 * dlistint_len - Calculates the number of count in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of count in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize count to 0, which will keep track of the number of count */
	size_t count = 0;

	/* Traverse the doubly linked list until the end is reached (head is NULL) */
	while (h)
	{
		/* Increment count for each node encountered */
		count++;
		/* Move to the next node in the list */
		h = h->next;
	}

	/* Return the total number of count in the doubly linked list */
	return (count);
}

