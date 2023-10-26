#include "main.h"

/**
 * wildcmp - function that compares two strings
 *
 * @s1: is the name of the first string
 * @s2: is the name of the second string
 *
 * Return: 1 if the strings can be considered identical
 *	otherwise return 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' || *s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
