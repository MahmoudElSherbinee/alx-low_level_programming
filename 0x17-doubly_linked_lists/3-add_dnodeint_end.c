#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 *
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 * Return: A pointer to the newly created node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Declare new and last node pointers */
	dlistint_t *new, *last;

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new == NULL)
		return (NULL);

	/* Set the data for the new node */
	new->n = n;

	/* Set the next pointer of the new node to NULL (it's the new tail) */
	new->next = NULL;

	/* If the list is empty, */
	/* set the previous pointer to NULL and update the head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* If the list is not empty, traverse to find the current tail */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* Update the next pointer of the current tail to the new node */
	last->next = new;

	/* Set the previous pointer of the new node to the current tail */
	new->prev = last;

	/* Return a pointer to the newly created node */
	return (new);
}
