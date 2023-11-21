#include "lists.h"

/**
* pop_listint - Removes the head node of a listint_t linked list.
*
* @head: A pointer to a pointer to the head of the linked list.
*
* Return: The value stored in the head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int save; /* Variable to store the value of the head node */

	listint_t *temp; /* Temporary pointer to the head node */

	/* Check if the list is empty */
	if (*head == NULL)
	{
		return (0);
	}

	temp = *head; /* Save the current head node */
	*head = temp->next; /* Update the head to the next node */
	save = temp->n; /* Save the value of the head node */
	free(temp); /* Free the memory of the removed head node */

	return (save); /* Return the value of the removed head node */
}
