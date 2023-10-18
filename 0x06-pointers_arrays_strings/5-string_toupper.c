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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 97 && i <= 122)
		{
			str[i] = (str[i] - 32);
		}
	}
	return (str);
}
