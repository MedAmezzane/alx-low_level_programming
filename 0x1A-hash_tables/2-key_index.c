#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table.
 * @key: The key to compute the index for.
 * @size: The size of the hash table.
 *
 * Return: The computed index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*
	* Use the djb2 hash function to compute the hash value and then mod it by
	* the size
	*/
	return (hash_djb2(key) % size);
}
