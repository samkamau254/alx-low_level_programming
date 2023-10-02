#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

char *allocateBuffer(char *destFile);
void closeFile(int fileDescriptor);

/**
 * allocateBuffer - Allocates a buffer for file copying.
 * @destFile: The destination file's name.
 *
 * Return: A pointer to the allocated buffer.
 */
char *allocateBuffer(char *destFile)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destFile);
		exit(99);
	}

	return (buffer);
}

/**
 * closeFile - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void closeFile(int fd)
{
	int closeStatus;

	closeStatus = close(fd);

	if (closeStatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, non-zero on error.
 *
 * Description: If the argument count is incorrect, exit with a usage message.
 * If the source file does not exist or cannot be read, exit with an error.
 * If the destination file cannot be created or written to, exit with an error.
 * If either file cannot be closed, exit with an error.
 */
int main(int argc, char *argv[])
{
	int srcFile, destFile, bytesRead, bytesWritten;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocateBuffer(argv[2]);
	srcFile = open(argv[1], O_RDONLY);
	bytesRead = read(srcFile, buffer, BUFFER_SIZE);
	destFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMISSIONS);

	do {
		if (srcFile == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytesWritten = write(destFile, buffer, bytesRead);
		if (destFile == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytesRead = read(srcFile, buffer, BUFFER_SIZE);
		destFile = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytesRead > 0);

	free(buffer);
	closeFile(srcFile);
	closeFile(destFile);

	return (0);
}

