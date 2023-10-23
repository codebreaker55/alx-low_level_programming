#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: is the name of the first string
 * @accept: is the name of the second string
 *
 * Return: a pointer to the byte in s
 *	that matches one of the bytes in accept
 *	or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
