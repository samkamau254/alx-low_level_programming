#include "main.h"

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

	if (n >> 1)
		print_binary(n >> 1);

	custom_putchar((n & 1) + '0');
}

