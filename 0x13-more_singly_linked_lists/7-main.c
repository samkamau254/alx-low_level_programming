#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *s;
	listint_t *node;

	s = NULL;
	add_nodeint_end(&s, 0);
	add_nodeint_end(&s, 1);
	add_nodeint_end(&s, 2);
	add_nodeint_end(&s, 3);
	add_nodeint_end(&s, 4);
	add_nodeint_end(&s, 98);
	add_nodeint_end(&s, 402);
	add_nodeint_end(&s, 1024);
	print_listint(s);
	node = get_nodeint_at_index(s, 5);
	printf("%d\n", node->n);
	print_listint(s);
	free_listint2(&s);
	return (0);
}

