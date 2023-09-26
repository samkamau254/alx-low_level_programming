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
	int sum;

	s = NULL;
	add_nodeint_end(&s, 0);
	add_nodeint_end(&s, 1);
	add_nodeint_end(&s, 2);
	add_nodeint_end(&s, 3);
	add_nodeint_end(&s, 4);
	add_nodeint_end(&s, 98);
	add_nodeint_end(&s, 402);
	add_nodeint_end(&s, 1024);
	sum = sum_listint(s);
	printf("sum = %d\n", sum);
	free_listint2(&s);
	return (0);
}

