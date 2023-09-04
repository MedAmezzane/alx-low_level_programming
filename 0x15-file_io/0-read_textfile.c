#include "main.h"
/**
 * read_textfile - Read and print the contents of a text file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 * Return: The number of letters read and printed, or 0 on failure.
 *
 * Description:
 * This function reads the contents of a text file specified by @filename and
 * prints it to the standard output (STDOUT). It reads a maximum of @letters
 * characters and returns the number of characters successfully read and
 * printed.
 *
 * Author: MedAMEZZANE
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0); /*Invalid filename*/

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0); /*Failed to open file*/

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0); /*Memory allocation failed*/
	}

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	if (bytes_read == -1 || bytes_written == -1)
		return (0); /*Read or write operation failed*/

	return (bytes_written); /*Return the number of letters read and printed*/
}
