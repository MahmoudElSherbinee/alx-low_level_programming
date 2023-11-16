#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
*
* This function creates a new node with the given string and adds it to the
* end of the linked list.
*
* @head: A pointer to a pointer to the head of the linked list.
* @str: The string to be duplicated and added to the new node.
*
* Return: The address of the new element, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* Create a temporary pointer */
	list_t *temp;

	/* Create a new node */
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Duplicate the string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Set the next pointer of the new node to NULL (end of the list) */
	new_node->next = NULL;
	/* If the list is empty, make the new node the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* Set the next pointer of the last node to the new node */
		temp->next = new_node;
	}
	/* Return the address of the new element */
	return (new_node);
}
