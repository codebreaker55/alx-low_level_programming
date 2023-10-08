#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all lowercase alphabet in reverse, followed by a new line.
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
