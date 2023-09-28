#include "main.h"

/**
 * print_binary - Print the binary representation of an unsigned long int
 * @n: The unsigned long integer to print in binary
 */
void print_binary(unsigned long int n)
{
	int shift_flag = 0; /* Flag to track non-zero bits */
	unsigned long int mask;

	if (n == 0)
	{
		custom_putchar('0');
		return;
	}

	/* Loop through each bit position, from left to right */
	for (mask = 1UL << 63; mask > 0; mask >>= 1)
	{
		/* Check if the current bit is set (non-zero) */
		if (n & mask)
		{
			custom_putchar('1');
			shift_flag = 1;
		}
		else if (shift_flag) /* Print leading zeros after the first 1 */
		{
			custom_putchar('0');
		}
	}

	/* If n is all zeros, print a single '0' */
	if (!shift_flag)
		custom_putchar('0');
}

