#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data
 * @s: A pointer to the first element in the linked list
 *
 * Return: The data inside the element that was deleted,or 0 if list empty
 */
int pop_listint(listint_t **s)
{
	listint_t *temp;
	int num;

	if (!s || !*s)
		return (0);

	num = (*s)->n;
	temp = (*s)->next;
	free(*s);
	*s = temp;

	return (num);
}

