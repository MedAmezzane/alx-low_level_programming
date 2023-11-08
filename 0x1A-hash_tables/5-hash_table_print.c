#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to print.
 *
 * Description: This function prints the contents of a hash table in the
 * format: "{key': 'value', ...}". If the hash table is NULL or empty,
 * it doesn't print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	char data_printed = 0; /* Flag to track if data has been printed */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (data_printed == 1)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			data_printed = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
