#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated
 *	space in memory which contains a copy of the string given as a parameter
 *
 * @str: is the string to be duplicated
 *
 * Return: NULL if str = NULL
 *	returns a pointer to the duplicated string
 *	It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	int n, len = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < len; n++)
		{
			ptr[n] = str[n];
		}
	}
	return (ptr);
}
