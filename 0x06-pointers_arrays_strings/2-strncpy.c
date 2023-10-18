#include "main.h"

/**
 * *_strncpy - function that copies a string
 *
 * @dest: name of first string
 * @src: name of second string
 * @n: is the maximum number of characters to be copied
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
