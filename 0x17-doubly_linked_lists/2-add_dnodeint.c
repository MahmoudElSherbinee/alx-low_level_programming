#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 * Return: A pointer to the newly created node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Declare a new node pointer */
	dlistint_t *new;

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (new == NULL)
		return (NULL);

	/* Set the data for the new node */
	new->n = n;

	/* Set the previous pointer of the new node to NULL (it's the new head) */
	new->prev = NULL;

	/* Set the next pointer of the new node to the current head */
	new->next = *head;

	/* If the list is not empty,*/
	/* update the previous pointer of the current head */
	if (*head != NULL)
		(*head)->prev = new;

	/* Update the head pointer to the new node, making it the new head */
	*head = new;

	/* Return a pointer to the newly created node */
	return (new);
}
