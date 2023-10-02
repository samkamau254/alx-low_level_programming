#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for the program
 * @ac: The number of command-line arguments
 * @av: An array of command-line argument strings
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

