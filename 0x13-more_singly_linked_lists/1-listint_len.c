#include "lists.h"

/**
 * print_listint - function prints all the elements of a listint_t list.
 * 
 * @h: A pointer to the head of the linked list.
 * 
 * Return: the number of nodes

*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
