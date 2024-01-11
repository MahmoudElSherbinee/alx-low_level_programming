#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	/* Declare a temporary node pointer */
	dlistint_t *tmp;

	/* Traverse the doubly linked list until the end is reached (head is NULL) */
	while (head)
	{
		/* Save the next node in a temporary pointer */
		tmp = head->next;

		/* Free the current node */
		free(head);

		/* Move to the next node in the list */
		head = tmp;
	}
}
