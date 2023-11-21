#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given index
* @head: A pointer to a pointer to the head of the singly linked list.
* @idx: The index where the new node should be inserted.
* @n: The value to be stored in the new node.
*
* Return: A pointer to the new node, or NULL if it fails.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
