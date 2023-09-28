#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: Pointer to a binary string
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = (result << 1) + (b[index] - '0');
		index++;
	}

	return (result);
}

