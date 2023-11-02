#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: is a pointer to the memory previously allocated
 *	with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: return ptr If new_size == old_size
 *	If new_size is equal to zero, and ptr is not NULL return NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int len = 0;
	void *str;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);

	if (new_size > old_size)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			while (len < old_size && len < new_size)
			{
				*((char *)str + len) = *((char *)ptr + len);
				len++;
			}
		}
		free(ptr);
	}
	return (str);
}
