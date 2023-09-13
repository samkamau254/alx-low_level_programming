#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>   /* Include standard library for size_t */
#include <stdlib.h>   /* Include standard library for memory allocation */

/* Function that prints a name using a specified printing function */
void print_name(char *name, void (*f)(char *));

/* Function that compares two integers */
int int_cmp(int a, int b);

/* Function that iterates over an integer array and performs an action */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function that searches for an integer in an array based on a comparison function */
int int_index(int *array, int size, int (*cmp)(int));

#endif

