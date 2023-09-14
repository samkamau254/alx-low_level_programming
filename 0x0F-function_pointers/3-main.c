#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		/* Print an error message and exit with code 98 if incorrect arguments */
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Check if the operator is valid and has only one character */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		/* Print an error message and exit with code 99 if invalid operator */
		printf("Error\n");
		exit(99);
	}

	/* Check for division by zero or modulo by zero */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		/* Print an error message and exit with code 100 if division or modulo by zero */
		printf("Error\n");
		exit(100);
	}

	/* Print the result of the operation */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

