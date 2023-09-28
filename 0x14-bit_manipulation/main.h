#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: Pointer to a binary string
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int custom_putchar(char character);
int get_endianness(void);

#endif /* MAIN_H */

