#include "hash_tables.h"

/**
 * hash_table_delete - function deletes the entire hash table
 * and free allocated memory.
 * This function deletes the entire hash table,
 * freeing the memory allocated for
 * each key-value pair and the array of linked lists. It also frees the memory
 * allocated for the hash table structure itself.
 *
 * @ht:  Pointer to the hash table structure to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Index variable for iterating through the hash table. */
	unsigned long int i;
	hash_node_t *current; /* Pointer to traverse the linked list. */

	/* Check for NULL pointer. */
	if (ht == NULL)
		return;

	/* Check if the hash table has no elements or is invalid. */
	if (ht->size < 1 || ht->array == NULL)
	{
		free(ht);
		return;
	}

	/* Iterate through each index of the hash table. */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at each index and free memory. */
		while (ht->array[i])
		{
			current = ht->array[i];
			ht->array[i] = current->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}

	/* Free the array of linked lists and the hash table structure. */
	free(ht->array);
	free(ht);
}
