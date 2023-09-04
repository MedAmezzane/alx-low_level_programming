#include "main.h"
#include <stdio.h>
/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or an error code on failure.
 *
 * Description:
 * This program copies the content of one file specified by argv[1]
 * to another file specified by argv[2]. If any errors occur during
 * file operations, the program prints an error message and exits with
 * a corresponding error code.
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3) /* Check for the correct number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /*Invalid number of arguments*/
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{/* Open the source file for reading */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /*Unable to open source file*/
	}
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{/* Open or create the destination file for writing */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); /*Unable to open or create destination file*/
	}
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{/* Copy data from source to destination */
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); /*Error writing to destination file*/
		}
	}
	if (bytes_read == -1) /* Check for read error */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /*Error reading from source file*/
	}
	if (close(source_fd) == -1) /* Close the source file */
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source_fd);
	if (close(dest_fd) == -1) /* Close destination files */
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest_fd);
	return (0); /*Success*/
}
