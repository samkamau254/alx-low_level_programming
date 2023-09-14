#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct for operators and their associated functions.
 * @op: The operator as a string.
 * @f: A function pointer to the associated operation function.
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 * op_add - Function that performs addition.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the addition.
 */
int op_add(int a, int b);

/**
 * op_sub - Function that performs subtraction.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b);

/**
 * op_mul - Function that performs multiplication.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b);

/**
 * op_div - Function that performs division.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 * Return: The result of the division.
 */
int op_div(int a, int b);

/**
 * op_mod - Function that performs modulo.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 * Return: The result of the modulo operation.
 */
int op_mod(int a, int b);

/* Function prototype for getting an operation function by operator string */
int (*get_op_func(char *s))(int, int);

#endif

