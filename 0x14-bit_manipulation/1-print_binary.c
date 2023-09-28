#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int printing = 0;

	if (n == 0)
	{
		custom_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			custom_putchar('1');
			printing = 1;
		}
		else if (printing)
		{
			custom_putchar('0');
		}
		shift--;
	}
}

