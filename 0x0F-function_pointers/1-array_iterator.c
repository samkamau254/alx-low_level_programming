#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Iterates through an array and applies a custom action to each element.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to a function that defines the custom action.
 *
 * This function takes an array, its size, and a function pointer that
 * represents a custom action to be applied to each element of the array.
 * It checks for NULL pointers to ensure safe execution. Then, it iterates
 * over the elements of the array, applying the provided action to each one.
 *
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check for NULL array and action function pointer */
	if (array == NULL || action == NULL)
		return;

	size_t i;

	for (i = 0; i < size; i++)
	{
		/* Apply the custom action to the current element of the array */
		action(array[i]);
	}
}

