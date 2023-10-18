#include "main.h"

/**
 * *_strcat -  function that concatenates two strings
 *
 * @dest: is the name of the first string
 * @src: is the name of the second string
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
