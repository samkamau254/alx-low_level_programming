#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check bits in
 * @index: Index at which to check the bit
 *
 * Return: Value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

