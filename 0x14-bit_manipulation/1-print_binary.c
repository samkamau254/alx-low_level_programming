#include "main.h"
#include <limits.h>

/**
 * print_binary_recursive - Print the binary representation
 * @n: The unsigned long int to print in binary
 */
void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
		print_binary_recursive(n >> 1);

	custom_putchar((n & 1) + '0');
}

/**
 * print_binary - Print the binary representation of an unsigned long int
 * @n: The unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		custom_putchar('0');
		return;
	}

	print_binary_recursive(n);
}

