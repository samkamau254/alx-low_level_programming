#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @s: Pointer to the pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **s)
{
	listint_t *current = *s;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*s = prev;

	return (*s);
}

