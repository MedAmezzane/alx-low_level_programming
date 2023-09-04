#include "main.h"
/**
 * create_file - Create or truncate a file and write text content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 *
 * Description:
 * This function creates or truncates a file specified by @filename and writes
 * the content provided in @text_content to the file. If @filename is NULL, or
 * if the file cannot be created or written to, the function returns -1.
 *
 * Author: MedAMEZZANE
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length, written;

	if (filename == NULL)
		return (-1); /*Invalid filename*/

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (file_descriptor == -1)
		return (-1); /*Failed to create or open the file*/

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			; /*Calculate the length of text_content*/

		written = write(file_descriptor, text_content, length);
	}

	if (written == -1)
	{
		close(file_descriptor);
		return (-1); /*Write operation failed*/
	}

	close(file_descriptor);
	return (1); /*File creation and content writing successful*/
}
