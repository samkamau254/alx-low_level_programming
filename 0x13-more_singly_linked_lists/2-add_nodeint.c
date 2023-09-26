#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @s: A pointer to the pointer to the first node in the list
 * @n: The data to insert into the new node
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **s, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *s;
	*s = new_node;

	return (new_node);
}

