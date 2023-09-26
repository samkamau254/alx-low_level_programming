#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *s = NULL;
	int i;

	add_nodeint_end(&s, 0);
	add_nodeint_end(&s, 1);
	add_nodeint_end(&s, 2);
	add_nodeint_end(&s, 3);
	add_nodeint_end(&s, 4);
	add_nodeint_end(&s, 98);
	add_nodeint_end(&s, 402);
	add_nodeint_end(&s, 1024);

	for (i = 0; i < 10; i++)
	{
		printf("-----------------\n");
		delete_nodeint_at_index(&s, 0);
		print_listint(s);
	}

	return (0);
}

