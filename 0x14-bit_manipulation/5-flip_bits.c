#include "main.h"

/**
 * flip_bits - Count the number of bits to flip to get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Description: This function calculates the number of bits that need to be
 * flipped in order to get from n to m.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/* Increment count for each set bit (1) */
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

