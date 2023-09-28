#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: Pointer to the number to modify
 * @index: The index of the bit to clear (0-based)
 *
 * Description: This function sets the bit at the specified index to 0
 * in the number pointed to by n.
 *
 * Return: 1 if it succeeded, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1UL << index));
	return (1);
}

