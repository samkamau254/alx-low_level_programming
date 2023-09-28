#include "main.h"

/**
 * custom_putchar - writes the character c to stdout
 * @character: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int custom_putchar(char character);

/**
 * print_binary - Print the binary representation of an unsigned long int
 * @n: The unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
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

