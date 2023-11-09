#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: is a constant unsigned integer
 * @...: is the integers included in sum
 *
 * Return: the sum of all its parameters
 *	if n equal zero return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int res, num;

	va_start(args, n);
	res = 0;

	if (n == 0)
	{
		return (0);
	}
	for (num = 0; num <  n; num++)
	{
		res += va_arg(args, int);
	}
	va_end(args);
	return (res);
}
