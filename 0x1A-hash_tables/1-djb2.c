#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 hash algorithm.
 * @str: String used to generate the hash value.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381; /* Initial value for the hash */

	/* Iterate through each character in the input string */
	while ((c = *str++))
	{
		/* Update the hash using the djb2 algorithm */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	/* Return the final computed hash value */
	return (hash);
}
