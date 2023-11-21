#include "lists.h"

/**
* reverse_listint - Reverses a singly linked list
* @head: A pointer to a pointer to the head of the singly linked list.
*
* Return: A pointer to the first node of the reversed list.
*
* Description: This function reverses the order of the nodes in a singly
* linked list. It does this by recursively traversing the list and
* reversing the pointers at each step.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	listint_t *next;

	while (current)
	{
		next = current->next;

		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (*head);
}
