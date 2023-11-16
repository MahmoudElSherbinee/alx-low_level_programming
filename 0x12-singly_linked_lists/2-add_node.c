#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * This function creates a new node with the given string and adds it to the
 * beginning of the linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element (new head), or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
    /* Create a new node */
	list_t *new_node = malloc(sizeof(list_t));

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	/* Return the address of the new element (new head) */
	return (new_node);
}
