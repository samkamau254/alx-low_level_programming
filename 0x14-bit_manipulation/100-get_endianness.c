#include "main.h"
/**
 * get_endianness - Check the endianness of the system
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int a = 1;

	return (*(char *)&a);
}

