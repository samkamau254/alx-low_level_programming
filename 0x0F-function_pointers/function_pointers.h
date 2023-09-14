#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - Prints a name using a specified printing function
 * @name: The name to print
 * @f: The printing function to use
 *
 * Description:
 *   This function prints a name using the provided printing function @f.
 */
void print_name(char *name, void (*f)(char *));

/**
 * int_cmp - Compares two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Description:
 *   This function compares two integers 'a' and 'b' and returns a positive
 *   value if 'a' is greater, a negative value if 'b' is greater, and 0 if
 *   they are equal.
 *
 * Return:
 *   Positive if 'a' is greater, negative if 'b' is greater, 0 if equal
 */
int int_cmp(int a, int b);

/**
 * array_iterator - Iterates over an integer array and performs an action
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: The action to perform on each element
 *
 * Description:
 *   This function iterates over an integer array and applies the specified
 *   action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Searches for an integer in an array based on a comparison
 *             function
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: The comparison function
 *
 * Description:
 *   This function searches for an integer in an array based on the provided
 *   comparison function 'cmp'.
 *
 * Return:
 *   Index of the first element for which 'cmp' returns 1, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

