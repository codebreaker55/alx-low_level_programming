#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
*/

void print_alphabet_x10(void)
{
	int line, alpha;

	for (line = 0; line <= 9; line++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
