#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},   /* Addition operator */
		{"-", op_sub},   /* Subtraction operator */
		{"*", op_mul},   /* Multiplication operator */
		{"/", op_div},   /* Division operator */
		{"%", op_mod},   /* Modulus operator */
		{NULL, NULL},    /* End of the operator list */
	};

	int i = 0;

	/* Iterate through the list of operators to find a match */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

