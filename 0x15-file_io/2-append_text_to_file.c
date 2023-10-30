#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to which text is appended.
 * @text_content: The NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1); /* File exists, but nothing to append, return 1. */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* Unable to open the file for appending. */
	bytes_written = write(fd, text_content, strlen(text_content));
	close(fd);
	return ((bytes_written == -1) ? -1 : 1);
}

