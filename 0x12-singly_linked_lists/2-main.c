#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head = NULL;

	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");

	return (0);
}

