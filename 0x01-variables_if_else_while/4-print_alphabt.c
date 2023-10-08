#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase letters except q and e
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
