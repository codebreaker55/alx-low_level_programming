#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: is a pointer to the string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 *	and there is one or more chars in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
