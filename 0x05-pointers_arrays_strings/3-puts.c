#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line,
 *	to stdout
 *
 * @str: is the name off the string
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str + 0);

	_putchar('\n');
}
