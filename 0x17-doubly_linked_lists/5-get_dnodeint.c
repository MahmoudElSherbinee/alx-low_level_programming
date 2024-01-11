#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a node
 * at a specific index in a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the desired node.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Traverse the doubly linked list until the specified index is reached */
	for (; index != 0; index--)
	{
		/* Check if the current node is NULL (index out of bounds) */
		if (head == NULL)
			return (NULL);

		/* Move to the next node in the list */
		head = head->next;
	}

	/* Return a pointer to the node at the specified index */
	return (head);
}
