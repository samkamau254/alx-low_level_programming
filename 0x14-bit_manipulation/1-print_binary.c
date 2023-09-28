#include "main.h"
#include <limits.h>

/**
 * print_binary - Print the binary representation of an unsigned long int
 * @n: The unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (CHAR_BIT * sizeof(unsigned long int) - 1);
	int flag = 0;

	if (n == 0)
	{
		custom_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			custom_putchar('0');
		else if ((n & mask) != 0)
		{
			custom_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}

