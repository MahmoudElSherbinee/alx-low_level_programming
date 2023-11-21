#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: A pointer to a pointer to the head of the singly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int

delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i != index)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);
	return (1);
}
