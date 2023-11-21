#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list.
*
* @head: A pointer to a pointer to the head of the linked list.
* @n: The integer value to be stored in the new node.
*
* Return: A pointer to the newly created node,
* or NULL if memory allocation fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = malloc(sizeof(listint_t)); /* Create a new node */

	/* Check if memory allocation was successful */
	if (first == NULL)
	{
		return (NULL);
	}

	/* If the linked list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = first;
		first->n = n;
		first->next = NULL;
	}
	else
	{
		/* If the linked list is not empty, insert the new node at the beginning */
		first->n = n;
		first->next = *head;
		*head = first;
	}

	return (first); /* Return a pointer to the head of the linked list */
}
