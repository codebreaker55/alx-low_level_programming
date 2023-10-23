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
	int ch = 0;

	while (s[ch] != '\0')
	{
		if (s[ch] == c)
		{
			return (s + ch);
		}
		ch++;
	}
	return ('\0');
}
