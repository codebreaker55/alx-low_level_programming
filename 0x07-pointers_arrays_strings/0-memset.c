#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: the name of the pointer
 * @b: is the constant byte
 * @n: is the bytes of the memory area pointed to by s
 *	with the constant b
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
