#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest
 *
 * @dest: is the name of the first pointer
 * @src: is the name of the second pointer
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
