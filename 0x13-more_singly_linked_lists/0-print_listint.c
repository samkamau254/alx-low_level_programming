#include "lists.h"

/**
 * print_listint - Print the integer elements of a linked list.
 * @s: A pointer to the linked list of type listint_t.
 *
 * Description: This function prints each integer element of the linked list
 * pointed to by 's' followed by a newline character. It counts the number of
 * nodes in the list and returns that count.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *s)
{
	size_t count = 0;

	while (s)
	{
		printf("%d\n", s->n);
		count++;
		s = s->next;
	}

	return (count);
}

