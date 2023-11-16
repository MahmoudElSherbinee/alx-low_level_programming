#include "lists.h"

/**
* free_list - Frees a list_t list.
*
* This function frees the memory allocated for each node in the linked list,
* including the strings within each node.
*
* @head: A pointer to the head of the linked list.
*/
void free_list(list_t *head)
{
	list_t *current, *next_node;

	/* Traverse the list and free memory for each node */
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		/* Save the next node before freeing the current one */
		free(current->str);  /* Free the string within the node */
		free(current);       /* Free the current node */
		current = next_node; /* Move to the next node */
	}
}
