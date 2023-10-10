#include "main.h"

/**
 * main - Entry point
 *
 * Description: using _putchar prototype to print _putchar
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}