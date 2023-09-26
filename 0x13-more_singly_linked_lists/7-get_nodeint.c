#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @s: Pointer to the first node in the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *s, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = s;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

