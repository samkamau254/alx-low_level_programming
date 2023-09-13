#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Iterates over an array and performs an action on each element.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to a function to perform on each element of the array.
 *
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check for NULL array and action function pointer */
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		/* Call the action function on each element of the array */
		action(array[i]);
	}
}





