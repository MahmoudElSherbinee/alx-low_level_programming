#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 *
 * This function traverses a linked list and counts the number of nodes in it.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (!h)
			return (0);

		else
		{
			h = h->next;
		}
	}
	return (i);

}
