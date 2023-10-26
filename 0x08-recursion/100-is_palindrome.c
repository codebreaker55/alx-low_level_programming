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
 * Return: 1 if a string is a palindrome, 0 otherwise
*/

int palindrome_find(char *s, int beg, int end);
int palindrome_wrapper(char *s);
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_find(s, 0, len - 1));
}

/**
 * palindrome_find - Recursively checks if a string is a palindrom
 * @beg: is an integer
 * @end: is an integer
 * @s: is the name of the string to be checked
 * Return: 1 if the string is a palindrome, 0 otherwise
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
