#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowercase then in uppercase
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';
	/*prints a - z*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/*prints A - Z*/
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
