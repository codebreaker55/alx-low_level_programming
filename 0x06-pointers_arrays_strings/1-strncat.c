#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: is the name of the first string
 * @src: is the name of the sedond string
 * @n: maximum number of characters
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
		dest[i + j] = '\0';
	}
	return (dest);
}


