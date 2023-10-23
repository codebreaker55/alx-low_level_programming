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
	unsigned int i;
	char *tmp;

	for (i = 0; i < n; i++)
	{
		tmp[i] = src[i];
		src[i] = dest[i];
		dest[i] = tmp[i];
	}
	return (dest);
}
