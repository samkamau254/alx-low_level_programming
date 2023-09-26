#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL
 * @s: A pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **s)
{
	listint_t *temp;

	if (s == NULL || *s == NULL)
		return;

	while (*s)
	{
		temp = (*s)->next;
		free(*s);
		*s = temp;
	}

	*s = NULL;
}

