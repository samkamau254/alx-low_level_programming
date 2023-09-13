#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function.
 * @name: The string to be printed.
 * @f: A pointer to a function that formats and prints the name.
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	/* Check for NULL pointers to prevent errors */
	if (name == NULL || f == NULL)
		return;

	/* Call the provided function to print the name */
	f(name);
}

