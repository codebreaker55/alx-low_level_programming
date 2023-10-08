#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using putchar to print all alphabet letters in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet >= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
