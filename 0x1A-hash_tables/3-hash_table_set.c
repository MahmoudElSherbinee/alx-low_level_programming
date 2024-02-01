#include "hash_tables.h"

/**
 * hash_table_set - function sets a key-value pair in the specified hash table.
 *
 * This function sets a key-value pair in the given hash table. It calculates
 * the index for the key using the key_index function.
 * If the key already exists in the hash table,
 * the function updates its value.
 * Otherwise, a new hash node
 * is created and added to the hash table at the calculated index.
 *
 * @hash_table:  Pointer to the hash table structure.
 * @key:         Pointer to the key string.
 * @value:       Pointer to the value string.
 *
 * Return:  Returns 1 upon successful insertion or update, 0 otherwise.
 */

int hash_table_set(hash_table_t *hash_table,
										const char *key, const char *value)
{
	int res_val;
	hash_node_t *NewItem;
	unsigned long int index;

	if (hash_table == NULL || hash_table->array == NULL || hash_table->size < 1 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, hash_table->size);

	/* check if the key exist and update it value */
	res_val = updateKey(hash_table, key, value, index);
	if (res_val == 1)
		return (1);
	else if (res_val == -1)
		return (0);

	NewItem = item_creation(key, value);
	if (NewItem == NULL)
		return (0);

	if (hash_table->array[index] == NULL)
		hash_table->array[index] = NewItem;
	else
	{
		NewItem->next = hash_table->array[index];
		hash_table->array[index] = NewItem;
	}

	return (1);
}

/**
 * updateKey - Check if the new item already exist if yes update it value.
 * @hash_table: Pointer to the hash table.
 * @key: key of the new item.
 * @value: Value of the new item.
 * @index: Index of the new item in the array.
 *
 * Return: 1 if the item already exist and it got updated, -1 if the item value
 *         couldnt be updated, 0 if the item doesnt exist in the hash table.
 */
int updateKey(hash_table_t *hash_table, const char *key, const char *value,
			   unsigned long int index)
{
	hash_node_t *current = hash_table->array[index];
	char *new_value;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (-1);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	return (0);
}

/**
 * item_creation - Create a new item to add to the hash table.
 * @key: Key of the new item.
 * @value: Value of the new item.
 *
 * Return: Pointer to the new item or NULL if the item couldnt be created.
 */
hash_node_t *item_creation(const char *key, const char *value)
{
	hash_node_t *NewItem;

	NewItem = malloc(sizeof(hash_node_t));
	if (NewItem == NULL)
		return (NULL);

	NewItem->key = strdup(key);
	if (NewItem->key == NULL)
		return (NULL);

	NewItem->value = strdup(value);
	if (NewItem->value == NULL)
		return (NULL);

	NewItem->next = NULL;

	return (NewItem);
}
