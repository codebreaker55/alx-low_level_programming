#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns 1
 *	if a string is a palindrome and 0 if not
 *
 * @s: is the name of the string
 * @beg: is an integer
 * @end: is an integer
 *
 * RETURN: 1 if a string is a palindrome and 0 if not
*/

int palindrome_find(char *s, int beg, int end);
int palindrome_wrapper(char *s);
int is_palindrome(char *s)
{
	return (*s);
}

/**
 * palindrome_find - to find palindrome
 * @beg: is an integer
 * @end: is an integer
 * @s: is the naame of the string
 * Return: 1 if its paalindrome, 0 if not
*/

int palindrome_find(char *s, int beg, int end)
{
	if (beg >= end)
	{
		return (1);
	}
	else if (s[beg] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_find(s, beg + 1, end - 1));
	}
}
/**
 * palindrome_wrapper - serves as a wrapper function
 * @s: is the name of the string
 * Return: palindrome_find function
*/

int palindrome_wrapper(char *s)
{
	int len = strlen(s);

	return (palindrome_find(s, 0, len - 1));
}
