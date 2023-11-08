#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Description: This function frees the memory associated with a hash table.
 * It deallocates memory for keys, values, nodes, and the array itself. If the
 * hash table is NULL or empty, it doesn't perform any actions.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *next_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			next_node = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = next_node;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
