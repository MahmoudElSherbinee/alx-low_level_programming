#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the values
 * in a listint_t linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the values in the linked list.
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0; /* Variable to store the sum of node values */

	/* Check if the list is empty */
	if (head == NULL)
	{
		return (0);
	}

	/* Iterate through the linked list, adding each node's value to the sum */
	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
