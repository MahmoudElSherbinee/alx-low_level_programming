#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the beginning of a linked list.
*
* @head: A pointer to a pointer to the head of the linked list.
* @n: The integer value to be stored in the new node.
*
* Return: A pointer to the newly created node,
* or NULL if memory allocation fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp;

	listint_t *last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = last;
		last->n = n;
		last->next = NULL;
	}
	else
	{
		for (temp = *head; temp; temp = temp->next)
		{
			if (temp->next == NULL)
			{
				temp->next = last;
				last->n = n;
				last->next = NULL;
			}
		}
	}
	return (last);
}
