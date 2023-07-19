#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns
 * @a: The first
 * @b: The second
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns sub
 * @a: The first
 * @b: The second
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mul
 * @a: The first
 * @b: The second
 * Return: a *b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: The first
 * @b: The second
 * Return: a divide b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modular
 * @a: The first
 * @b: The second
 * Return: modular
 */
int op_mod(int a, int b)
{
	return (a % b);
}

