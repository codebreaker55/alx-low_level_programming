#include "main.h"

/**
 * *_memcpy - function that copies memory area
 *
 * @dest: is the name of the first string
 * @src: is the name of the second string
 * @n: is the bytes from memory area src
 *	that will be copied to memory area dest
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy;

	for (cpy = 0; cpy < n; cpy++)
	{
		dest[cpy] = src[cpy];
	}
	return (dest);
}
