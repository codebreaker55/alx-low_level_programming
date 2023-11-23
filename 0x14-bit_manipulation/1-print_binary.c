#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: is an integer
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int bit_num = sizeof(n) * 8;
	int print_num = 0;

	while (bit_num)
	{
		if (n & 1L << --bit_num)
		{
			_putchar('1');
			print_num++;
		}
		else if (print_num)
		{
			_putchar('0');
		}
	}
	if (!print_num)
	{
		_putchar('0');
	}
}
