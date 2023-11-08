#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function used to add two integers
 *
 * @a: is an integer
 * @b: is an integer
 *
 * Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function used to subtruct two integers
 *
 * @a: is an integer
 * @b: is an integer
 *
 * Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function used to multiply two integers
 *
 * @a: is an integer
 * @b: is an integer
 *
 * Return: the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function used to divide two integers
 *
 * @a: is an integer
 * @b: is an integer
 *
 * Return: the result of the division of a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function used to get the remainder of division
 *	of two integers
 *
 * @a: is an integer
 * @b: is an integer
 *
 * Return: the remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
