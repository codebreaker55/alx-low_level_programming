#include "main.h"

/**
 * *create_array - function that creates an array of chars
 *	and initializes it with a specific char
 *
 * @size: is the size of the char
 * @c: is a character
 *
 * Return: NULL if size = 0
 *	return a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(char));

	while (size--)
	{
		if (size == 0 || ptr == 0)
		{
			return (NULL);
		}
		ptr[size] = c;
	}
	return (ptr);
}

