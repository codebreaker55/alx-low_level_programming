#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: input for alphabet letters
 *
 * Return: 1 if c is uppercase
 *	otherwise return 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
