#include "main.h"
#include <stdlib.h>
/**
 * word_len - Computes the length of a word in a string.
 * @str: The input string.
 *
 * Return: The length of the word.
 *
 * Author: MedAMEZZANE
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 *
 * Author: MedAMEZZANE
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string to be split.
 *
 * Return: A pointer to the array of strings, or NULL if memory allocation
 *			fails or input is empty.
 *
 * Author: MedAMEZZANE
 */
char **strtow(char *str)
{
	char **word_array;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	word_array = malloc(sizeof(char *) * (words + 1));
	if (word_array == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		word_array[w] = malloc(sizeof(char) * (letters + 1));

		if (word_array[w] == NULL)
		{
			for (; w >= 0; w--)
				free(word_array[w]);

			free(word_array);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			word_array[w][l] = str[index++];

		word_array[w][l] = '\0';
	}
	word_array[w] = NULL;

	return (word_array);
}
