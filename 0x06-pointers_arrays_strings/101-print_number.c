#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: is integer number
 *
 * Return: nothing
*/

void print_number(int n)
{
	unsigned int N;

	N = n;

	if (n < 0)
	{
		_putchar('-');
		N = -n;
	}
	if (N / 10)
	{
		print_number(N / 10);
	}
	_putchar((N % 10) + 48);
}
