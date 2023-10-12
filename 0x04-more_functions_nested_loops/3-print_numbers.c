#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *	using _putchar twice
 *
 * Return: always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
