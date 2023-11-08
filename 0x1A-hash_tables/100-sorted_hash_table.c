#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the hash table.
 *
 * Return: Pointer to the new table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}

/**
 * make_shash_node - Creates a node for the sorted hash table.
 * @key: Key for the data.
 * @value: Data to be stored.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = node->snext = node->sprev = NULL;
	return (node);
}

/**
 * add_to_sorted_list - Adds a node to the sorted (by key's ASCII) linked list.
 * @table: The sorted hash table.
 * @node: The node to add.
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *current;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	current = table->shead;
	while (current != NULL)
	{
		if (strcmp(node->key, current->key) < 0)
		{
			node->snext = current;
			node->sprev = current->sprev;
			current->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		current = current->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - Sets a key to a value in the hash table.
 * @ht: The sorted hash table.
 * @key: The key to the data.
 * @value: The data to add.
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *node, *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	node = make_shash_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	add_to_sorted_list(ht, node);
	return (1);
}

/**
 * shash_table_get - Retrieves a value from the hash table.
 * @ht: The hash table.
 * @key: The key to the data.
 *
 * Return: The value associated with the key, or NULL on failure.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char flag = 0; /* 0 before printing any data, 1 after */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: The hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	char flag = 0; /* 0 before printing any data, 1 after */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next_node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
