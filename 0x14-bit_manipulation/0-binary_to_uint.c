#include "main.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The decimal value of the binary number, or 0 if there's an error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num * 2 + (b[i] - '0');
		i++;
	}

	return (num);
}

