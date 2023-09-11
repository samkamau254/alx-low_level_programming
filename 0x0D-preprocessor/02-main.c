#include <stdio.h>
/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char *file_name = __FILE__;

	printf("%s\n", file_name);
	return (0);
}

