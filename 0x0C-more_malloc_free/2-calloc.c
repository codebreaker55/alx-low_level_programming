#include "main.h"

/**
 * *my_memset - used to fill memory with a constant byte
 *
 * @s: is a name of a string
 * @c: is a character
 * @len: is an unsigned int
 *
 * Return: a pointer
*/

void *my_memset(char *s, char c, unsigned int len)
{
	char *str = s;

	while (len > 0)
	{
		*s = c;
		s++;
		len--;
	}
	return (str);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: is an unsigned int
 * @size: is an unsigned int
 *
 * Return: a pointer to the allocated memory
 *	If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr =  malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	my_memset(ptr, 0, size * nmemb);
	return (ptr);
}
