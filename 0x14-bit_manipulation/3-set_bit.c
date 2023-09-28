#include "main.h"

/**
 * set_bit - Set the value of a bit at a given index to 1
 * @n: Pointer to the number to modify
 * @index: The index of the bit to set (0-based)
 *
 * Description: This function sets the bit at the specified index to 1
 * in the number pointed to by n.
 *
 * Return: 1 if it succeeded, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | (1UL << index));
	return (1);
}

