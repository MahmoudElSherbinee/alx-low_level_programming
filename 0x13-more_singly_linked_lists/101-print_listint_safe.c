#include "lists.h"

/**
* print_listint_safe - Safely prints a linked list of integers.
*
* @head: A pointer to the head node of the linked list.
*
* Return: The number of nodes printed.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	/* reate an array to store visited nodes */
	const listint_t *visited[1024];

	/* nitialize the number of printed nodes to 0 */
	size_t num = 0;

	/* terate through the linked list */
	while (head != NULL && num < 1024)
	{
		/* heck if the current node has already been visited */
		for (i = 0; i < num; i++)
		{
			if (head == visited[i])
			{
				/* f the node is a cycle, print a message and return */
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num);
			}
		}

		/* ark the current node as visited */
		visited[num++] = head;

		/* rint the current node's value and address */
		printf("[%p] %d\n", (void *)head, head->n);

		/* ove to the next node */
		head = head->next;
	}

	/* eturn the total number of printed nodes */
	return (num);
}
