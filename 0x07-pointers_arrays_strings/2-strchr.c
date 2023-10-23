#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 *
 * @s: is the name of the string
 * @c: is the character that need to be found
 *
 * Return: a pointer to the first occurrence of the character c
 *	in the string s
 *	NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
