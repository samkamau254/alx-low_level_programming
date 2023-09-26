#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data in a listint_t list.
 * @s: The pointer to the first node in the linked list.
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *s)
{
	int sum = 0;
	listint_t *temp = s;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

