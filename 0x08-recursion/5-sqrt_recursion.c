#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: is an integer
 * @sqr: is a square root
 *
 * Return: natural square root of a number
 *	return -1 If n does not have a natural square root
*/

int square(int n, int sqr);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - used to fined the square root
 * @n: is an integer
 * @sqr: is a square root
 * Return: an integer
*/

int square(int n, int sqr)
{
	if ((sqr * sqr) == n)
	return (sqr);

	else if ((sqr * sqr) < n)
	{
		return (square(n, sqr + 1));
	}
	else
	return (-1);
}
