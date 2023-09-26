#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * linked list.
 * @s: A pointer to the first node in the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data to insert into the new node.
 *
 * Return: If successful, returns a pointer to the new node; otherwise, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **s, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *s;

	new = malloc(sizeof(listint_t));
	if (!new || !s)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *s;
		*s = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}

	free(new);
	return (NULL);
}

