#include "main.h"

/**
 * print_most_numbers - rints the numbers, from 0 to 9, followed by a new line
 *	excluding  2 and 4
 *	using _putchar only twice
 *
 *Return: always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
