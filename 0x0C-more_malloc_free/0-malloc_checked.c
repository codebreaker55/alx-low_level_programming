#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: is an unsigned integer
 *
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
