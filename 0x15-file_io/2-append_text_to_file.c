#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_file(const char *filename, const char *text_content)
{
	int fd, res, len = 0;

	if (!filename)
		return (-1);

	/* Open the file with write-only and append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		/* Write the text content to the file */
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

