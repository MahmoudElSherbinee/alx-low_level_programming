#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a specific
 * index in a doubly linked list.
 *
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if successful, -1 if deletion is not possible.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* Declare a temporary node pointer */
	dlistint_t *tmp = *head;

	/* If the list is empty, return -1 (deletion not possible) */
	if (*head == NULL)
		return (-1);

	/* Traverse the list until the desired index is reached */
	for (; index != 0; index--)
	{
		/* Check if the current node is NULL (index out of bounds) */
		if (tmp == NULL)
			return (-1);

		/* Move to the next node in the list */
		tmp = tmp->next;
	}
	/* If the node to be deleted is the head */
	if (tmp == *head)
	{
		*head = tmp->next;

		/* If the new head is not NULL, update its previous pointer to NULL */
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		/* Update pointers to bypass the node to be deleted */
		tmp->prev->next = tmp->next;

		/* If the next node is not NULL, update its previous pointer */
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	/* Free the memory of the deleted node */
	free(tmp);
	/* Return 1 to indicate successful deletion */
	return (1);
}
