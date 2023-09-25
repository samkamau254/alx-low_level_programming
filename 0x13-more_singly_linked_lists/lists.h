#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - A singly linked list of integers
 * @n: The integer value stored in the node
 * @next: A pointer to the next node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes for singly linked list operations */
size_t listint_len(const listint_t *s);
int pop_listint(listint_t **s);
listint_t *get_nodeint_at_index(listint_t *s, unsigned int index);
int sum_listint(listint_t *s);
listint_t *insert_nodeint_at_index(listint_t **s, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **s, unsigned int index);
listint_t *reverse_listint(listint_t **s);
size_t print_listint(const listint_t *s);
listint_t *add_nodeint(listint_t **s, const int n);
listint_t *add_nodeint_end(listint_t **s, const int n);
void free_listint(listint_t *s);
void free_listint2(listint_t **s);
size_t print_listint_safe(const listint_t *s);
size_t free_listint_safe(listint_t **s);
listint_t *find_listint_loop(listint_t *s);

#endif

