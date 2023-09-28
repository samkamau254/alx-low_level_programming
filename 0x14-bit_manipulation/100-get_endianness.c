#include "main.h"

/**
 * get_endianness - Check the endianness of the system
 *
 * Description: This function checks whether the system is big-endian or
 * little-endian by examining the byte order.
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	/* If the least significant byte (LSB) is 1, it's little endian */
	if (*endian_check)
		return (1);
	else
		return (0);
}

