#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point for the program.
 *
 * Description:
 * This program demonstrates the use of a singly linked list
 * by creating a linked list, adding a new node to the beginning, and then
 * printing the number of elements in the list.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}

