#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *	of a string to uppercase
 *
 * @str: is the name of the string
 *
 * Return: the pointer to str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i >= 'a' && i <= 'z'; i++)
	{
		str[i] = (str[i] - 32);
	}
	return (str);
}
