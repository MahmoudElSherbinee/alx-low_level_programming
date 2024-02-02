#include "hash_tables.h"

/**
 * shash_table_create - function creates a new sorted hash table
 * with the specified size.
 * This function allocates memory for a new sorted hash table,
 * including the array of linked lists,
 * and initializes the head and tail pointers of the sorted linked list.
 *
 * @size:  Size of the array (number of linked lists) in the sorted hash table.
 *
 * Return:  Returns a pointer to the newly created sorted hash table.
 *          If memory allocation fails, returns NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *stable;

	/* Check for invalid size. */
	if (size < 1)
	{
		perror("Size must be greater than 0\n");
		return (NULL);
	}

	stable = malloc(sizeof(shash_table_t));
	if (stable == NULL)
	{
		perror("Error allocating memory for the sorted hash table\n");
		return (NULL);
	}

	stable->size = size;
	stable->array = malloc(sizeof(shash_node_t *) * size);
	if (stable->array == NULL)
	{
		perror("Error allocating memory for the array of the table");
		free(stable);
		return (NULL);
	}
	stable->shead = NULL;
	stable->stail = NULL;

	for (i = 0; i < size; i++)
		stable->array[i] = NULL;

	return (stable);
}

/**
 * shash_table_set - function sets a key-value pair in the sorted hash table.
 *
 * This function sets a key-value pair in the sorted hash table. It calculates
 * the index for the key using the key_index function.
 * If the key already exists in the sorted hash table,
 * the function updates its value. Otherwise, a new
 * sorted hash node is created and added to the sorted hash table
 * at the calculated index.
 *
 * @ht:     Pointer to the sorted hash table structure.
 * @key:    Pointer to the key string.
 * @value:  Pointer to the value string.
 *
 * Return:  Returns 1 upon successful insertion or update, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* Index calculated using key_index function. */
	shash_node_t *new_item;	 /* Pointer to the new sorted hash node. */
	int rv;

	/* Check for NULL pointers and invalid size. */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key exists and update its value. */
	rv = key_update_s(ht, key, value, index);
	if (rv == 1)
		return (1);
	if (rv == -1)
		return (0);

	/* Key not found, create a new sorted hash node */
	/* and insert it into the sorted hash table. */
	new_item = create_item_s(key, value);
	if (new_item == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}

	rv = insert_dlist(new_item, ht);
	if (rv == -1)
		return (0);

	return (1);
}

/**
 * key_update_s - function updates the value associated
 * with the given key in the sorted hash table.
 * This function updates the value associated with the specified key in the
 * sorted hash table. It searches for the key in the linked list at the given
 * index and updates its value. If the key is not found, a new node is created
 * and inserted into the sorted hash table.
 *
 * @ht:     Pointer to the sorted hash table structure.
 * @key:    Pointer to the key string for which the value is updated.
 * @value:  Pointer to the new value string.
 * @index:  Index of the linked list in the sorted hash table array.
 *
 * Return:  Returns 1 upon successful update, 0 if the key is not found and a
 * new node is inserted, or -1 if memory allocation for the new value fails.
 */
int key_update_s(shash_table_t *ht, const char *key, const char *value,
				 unsigned long int index)
{
	shash_node_t *current = ht->array[index];
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
		current = current->snext;
	}

	/* Key not found, create a new node */
	/* and insert it into the sorted hash table. */
	new_value = strdup(value);
	if (new_value == NULL)
		return (-1);

	current = create_item_s(key, new_value);
	if (current == NULL)
	{
		free(new_value);
		return (-1);
	}

	insert_dlist(current, ht);
	return (0);
}

/**
 * create_item_s - function creates a new sorted hash node
 * with the specified key and value.
 * This function allocates memory for a new sorted hash node, copies the key
 * and value strings into the allocated memory, and initializes the next,
 * sprev, and snext pointers to NULL.
 *
 * @key:    Pointer to the key string for the new node.
 * @value:  Pointer to the value string for the new node.
 *
 * Return:  Returns a pointer to the newly created sorted hash node.
 *          If memory allocation fails, returns NULL.
 */
shash_node_t *create_item_s(const char *key, const char *value)
{
	shash_node_t *new_item;

	new_item = malloc(sizeof(shash_node_t));
	if (new_item == NULL)
		return (NULL);

	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (NULL);
	}

	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (NULL);
	}

	new_item->next = NULL;
	new_item->sprev = NULL;
	new_item->snext = NULL;

	return (new_item);
}

/**
 * insert_dlist - function inserts a node into the sorted doubly
 * linked list of a sorted hash table.
 * This function inserts a new node into the sorted doubly linked list of the
 * sorted hash table while maintaining the ascending order based on the key.
 *
 * @new_item:  Pointer to the new hash node to be inserted.
 * @ht:        Pointer to the sorted hash table structure.
 *
 * Return:  Returns 0 upon successful insertion.
 */
int insert_dlist(shash_node_t *new_item, shash_table_t *ht)
{
	shash_node_t *current;

	/* Empty list or new node key is smaller than the head's key. */
	if (ht->shead == NULL || strcmp(new_item->key, ht->shead->key) < 0)
	{
		new_item->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_item;
		ht->shead = new_item;
		if (ht->stail == NULL)
			ht->stail = new_item;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL &&
			   strcmp(new_item->key, current->snext->key) >= 0)
			current = current->snext;

		new_item->sprev = current;
		new_item->snext = current->snext;
		if (current->snext != NULL)
			current->snext->sprev = new_item;
		current->snext = new_item;

		if (new_item->snext == NULL)
			ht->stail = new_item;
	}

	return (0);
}

/**
 * shash_table_get - function gets the value associated
 * with the given key in the sorted hash table.
 * This function retrieves the value associated with the specified key in the
 * sorted hash table. It iterates through the sorted linked list and returns
 * the value when the matching key is found.
 *
 * @ht:   Pointer to the sorted hash table structure.
 * @key:  Pointer to the key string for which the value is sought.
 *
 * Return:  Returns a pointer to the value associated with the key, or NULL if
 *          the key is not found in the sorted hash table.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current; /* Pointer to traverse the sorted linked list. */

	/* Check for NULL pointer and an empty sorted linked list. */
	if (ht == NULL || ht->shead == NULL)
		return (NULL);

	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}

	return (NULL); /* Key not found in the sorted hash table. */
}

/**
 * shash_table_print - function prints the contents
 * of the sorted hash table.
 * This function prints the key-value pairs of the sorted hash table
 * in ascending order, starting from the head and moving towards the tail.
 * It iterates through the sorted linked list and prints each key-value pair.
 *
 * @ht:  Pointer to the sorted hash table structure.
 */
void shash_table_print(const shash_table_t *ht)
{
	/* Pointer to traverse the sorted linked list. */
	shash_node_t *current;
	int flag = 0; /* Flag to track whether a comma is needed for formatting. */

	/* Check for NULL pointer and an empty sorted linked list. */
	if (ht == NULL || ht->shead == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function prints the contents
 * of the sorted hash table in reverse order.
 * This function prints the key-value pairs of the sorted hash table in reverse
 * order, starting from the tail and moving towards the head.
 * It iterates through the sorted linked list and prints each key-value pair.
 *
 * @ht:  Pointer to the sorted hash table structure.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	/* Pointer to traverse the sorted linked list. */
	shash_node_t *current;
	int flag = 0; /* Flag to track whether a comma is needed for formatting. */

	/* Check for NULL pointer and an empty sorted linked list. */
	if (ht == NULL || ht->stail == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function deletes the entire sorted hash table
 * and free allocated memory.
 * This function deletes the entire sorted hash table, freeing the memory
 * allocated for each key-value pair and the array of linked lists. It also
 * frees the memory allocated for the hash table structure itself.
 *
 * @ht:  Pointer to the sorted hash table structure to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	/* Index variable for iterating through the hash table. */
	unsigned long int i;
	shash_node_t *current; /* Pointer to traverse the linked list. */

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
