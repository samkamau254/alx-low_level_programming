#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @s: A pointer to the listint_t list to be freed
 */
void free_listint(listint_t *s)
{
	listint_t *temp;

	while (s)
	{
		temp = s->next;
		free(s);
		s = temp;
	}
}

