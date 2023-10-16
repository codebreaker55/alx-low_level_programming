#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *	 followed by a new line
 *
 * @s: the pointer that will be printed in rev
*/

void print_rev(char *s)
{
	int rev;

	while (s[rev])
		rev++;

	while (rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
