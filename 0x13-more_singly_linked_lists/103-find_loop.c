#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a singly linked list.
 *
 * @head: A pointer to the head of the singly linked list.
 *
 * Return: A pointer to the node where the loop starts, or NULL if there is
 * no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* Initialize tortoise and hare pointers */
	listint_t *tortoise = head;
	listint_t *hare = head;

	/* Check for a loop using Floyd's Cycle Detection Algorithm */
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			/* If tortoise and hare pointers meet, there is a loop */
			break;
		}
	}

	/* If no loop is found, return NULL */
	if (tortoise != hare)
	{
		return (NULL);
	}

	/* Reset tortoise pointer to the head */
	tortoise = head;

	/* Move tortoise and hare pointers at the same pace */
	/* until they meet at the loop start */
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	/* The node where tortoise and hare meet is the loop start */
	return (tortoise);
}
