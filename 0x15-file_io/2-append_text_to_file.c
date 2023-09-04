#include "main.h"
/**
 * append_text_to_file - Append text content to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 * Return: 1 on success, -1 on failure.
 *
 * Description:
 * This function appends the content provided in @text_content to the end of
 * an existing file specified by @filename. If @filename is NULL, or if the
 * file cannot be opened for appending or the write operation fails, the
 * function returns -1.
 *
 * Author: MedAMEZZANE
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, written, length = 0;

	if (filename == NULL)
		return (-1); /*Invalid filename*/

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			; /*Calculate the length of text_content*/
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	written = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || written == -1)
		return (-1); /*File open or write operation failed*/

	close(file_descriptor);
	return (1); /*Content appended successfully*/
}
