#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: is the an integer
 *
 * Return: -1 if n is lower than 0 to indicate an error
 *	return 1 if n equal 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
