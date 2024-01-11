#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a specific index in a doubly linked list.
 *
 * @h: A pointer to the pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly created node,
 * or NULL if insertion is not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Declare temporary and new node pointers */
	dlistint_t *tmp = *h, *new;

	/* If index is 0, use add_dnodeint to insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list until one node before the desired index */
	for (; idx != 1; idx--)
	{
		/* Move to the next node in the list */
		tmp = tmp->next;

		/* Check if the current node is NULL (index out of bounds) */
		if (tmp == NULL)
			return (NULL);
	}

	/* If the next node is NULL, use add_dnodeint_end to insert at the end */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new == NULL)
		return (NULL);

	/* Set the data for the new node */
	new->n = n;

	/* Update pointers to insert the new node at the desired index */
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	/* Return a pointer to the newly created node */
	return (new);
}
