#include "main.h"

/**
 * print_alphabet - using _putchar to print
 *	the lowercase letters from a to z
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
