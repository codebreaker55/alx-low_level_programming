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

	for (rev = 0; *s[rev] != '\0'; rev++)
	{
		while (rev--)
		{
			_putchar(s[rev]);
		}
	}
	_putchar('\n');
}
