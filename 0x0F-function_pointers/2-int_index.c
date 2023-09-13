#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that compares integers.
 *
 * Return: The index of the first integer that matches the comparison function.
 *         If no match is found, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check for invalid input arguments */
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/* Iterate through the array elements */
	for (i = 0; i < size; i++)
	{
		/* Check if the current element matches the comparison function */
		if (cmp(array[i]))
			return (i);
	}

	/* If no match is found, return -1 */
	return (-1);
}

