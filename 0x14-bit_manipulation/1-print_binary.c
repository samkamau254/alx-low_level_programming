#include "main.h"

/**
 * print_binary - Prints a number in binary notation.
 * @n: Number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_length = sizeof(n) * 8;
	int print_flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_length > 0)
	{
		if ((n & mask) || print_flag)
		{
			_putchar((n & mask) ? '1' : '0');
			print_flag = 1;
		}
		mask <<= 1;
		bit_length--;
	}
}

