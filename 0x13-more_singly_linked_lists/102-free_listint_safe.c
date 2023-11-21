#include "lists.h"

/**
 * free_listint_safe - Safely frees a singly linked list of integers.
 *
 * @h: A pointer to the pointer to the head node of the linked list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, j;
	listint_t *next_node;
	/* Create an array to store visited nodes */
	listint_t *visited[1024];
	/* Initialize the number of freed nodes to 0 */
	size_t num_freed = 0;
	/* Iterate through the linked list */
	listint_t *current = *h;

	while (current != NULL && num_freed < 1024)
	{
		/* Check if the current node has already been visited */
		for (i = 0; i < num_freed; i++)
		{
			if (current == visited[i])
			{
				/* If the node is part of a cycle, */
				/* disconnect the nodes in the cycle and set the head to NULL */

				for (j = i; j < num_freed; j++)
				{
					visited[j]->next = NULL;
				}
				*h = NULL;
				return (num_freed);
			}
		}
		/* Mark the current node as visited */
		visited[num_freed++] = current;
		/* Save the next node before freeing the current node */
		next_node = current->next;
		/* Free the current node */
		free(current);
		/* Move to the next node */
		current = next_node;
	}
	/* Set the head to NULL, indicating an empty list */
	*h = NULL;
	/* Return the number of nodes freed */
	return (num_freed);
}
