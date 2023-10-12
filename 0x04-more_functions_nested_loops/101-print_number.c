#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: the integer to the printed
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first check if it is negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
