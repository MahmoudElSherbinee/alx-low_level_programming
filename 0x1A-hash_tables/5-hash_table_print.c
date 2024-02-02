#include "hash_tables.h"

/**
 * hash_table_print - function prints the contents of the hash table.
 *
 * This function prints the key-value pairs of the hash table in a readable
 * format. It iterates through each index of the hash table and prints the
 * key-value pairs present in the linked list at that index.
 *
 * @ht:  Pointer to the hash table structure.
 */
void hash_table_print(const hash_table_t *ht)
{
	/* Index variable for iterating through the hash table. */
	unsigned long int i;
	int flag = 0;		  /* Flag to track whether a comma is needed for formatting. */
	hash_node_t *current; /* Pointer to traverse the linked list. */

	/* Check for NULL pointers. */
	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
		printf("}\n");
	}
}
