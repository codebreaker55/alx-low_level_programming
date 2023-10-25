#include "main.h"

/**
 * is_prime_number - function that returns 1
 *	if the input integer is a prime number
 *	otherwise return 0
 *
 * @n: is integer number
 * @div: an integer used to check for prime numbers
 *
 * Return: 1 if the input integer is a prime number
 *	return 0 if else
*/

int prime_check(int n, int div);
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - checks for prime numbers
 * @n: is an integer
 * @div: is the integer used to check for prime numbers
 * Return: an integer number
*/

int prime_check(int n, int div)
{
	if (n <= 1 || n % div == 0)
	{
		return (0);
	}
	else if (n > 1 && div >= n)
	{
		return (1);
	}
	else
	{
		return (prime_check(n, div + 1));
	}
}
