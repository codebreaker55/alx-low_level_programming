#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: is the name of the string
*/

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		;

	i++;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
