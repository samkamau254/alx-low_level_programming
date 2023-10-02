#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and writes its content to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and write.
 *
 * Return: The actual number of bytes read and written, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *data;
	ssize_t total_bytes_read, bytes_written;
	int file_descriptor;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	data = malloc(letters);
	if (!data)
	{
		close(file_descriptor);
		return (0);
	}

	total_bytes_read = read(file_descriptor, data, letters);
	if (total_bytes_read == -1)
	{
		free(data);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, data, total_bytes_read);
	if (bytes_written == -1 || bytes_written != total_bytes_read)
	{
		free(data);
		close(file_descriptor);
		return (0);
	}

	free(data);
	close(file_descriptor);

	return (bytes_written);
}

