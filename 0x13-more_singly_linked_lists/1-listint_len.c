#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @s: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t listint_len(const listint_t *s)
{
	size_t count = 0;

	while (s)
	{
		count++;
		s = s->next;
	}

	return (count);
}

