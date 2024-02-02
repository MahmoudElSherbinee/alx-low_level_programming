#include "hash_tables.h"
/**
 * hash_table_get - function gets the value associated
 * with the given key in the hash table.
 * This function retrieves the value associated with the specified key in the
 * given hash table. It calculates the index for the key using the key_index
 * function and then iterates through the linked list at that index to find
 * the matching key.
 *
 * @ht:   Pointer to the hash table structure.
 * @key:  Pointer to the key string for which the value is sought.
 *
 * Return:  Returns a pointer to the value associated with the key, or NULL if
 *          the key is not found in the hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
