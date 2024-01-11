#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n) in a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 * Return: The sum of all the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	/* Initialize sum to 0, which will accumulate the sum of the data */
	int sum = 0;

	/* Traverse the doubly linked list until the end is reached (head is NULL) */
	while (head)
	{
		/* Add the data of the current node to the sum */
		sum += head->n;

		/* Move to the next node in the list */
		head = head->next;
	}

	/* Return the computed sum of all the data in the doubly linked list */
	return (sum);
}
