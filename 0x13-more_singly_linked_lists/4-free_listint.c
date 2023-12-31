#include "lists.h"

/**
* free_listint - Frees a list_t list.
*
* This function frees the memory allocated for each node in the linked list,
* including the integers within each node.
*
* @head: A pointer to the head of the linked list.
*/

void free_listint(listint_t *head)
{
	listint_t *current, *last;

	current = head;

	while (current != NULL)
	{
		last = current->next;
		free(current);
		current = last;
	}
}
