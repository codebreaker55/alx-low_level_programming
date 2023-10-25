#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: is the name of the string
 *
 * Return: the length of a string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
