#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all command-line arguments into a single string.
 * @ac: The number of command-line arguments.
 * @av: An array of pointers to command-line argument strings.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if
 *			memory allocation fails or ac is 0.
 *
 * Author: MedAMEZZANE
 */
char *argstostr(int ac, char **av)
{
	char *result_str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total size needed for the concatenated string */
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	result_str = malloc(sizeof(char) * (size + 1));

	if (result_str == NULL)
		return (NULL);

	index = 0;

	/* Copy the characters from each string and add newline separator */
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			result_str[index++] = av[arg][byte];

		result_str[index++] = '\n';
	}

	result_str[size] = '\0';

	return (result_str);
}
