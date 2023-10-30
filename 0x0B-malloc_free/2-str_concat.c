#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: is the name of the first string
 * @s2: is the name of second string
 *
 * Return: to a newly allocated space in memory that
 *	contents of s1, followed by the contents of s2
 *	and null terminated
 *	should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int len = 0, size = 0, LEN;
	char *ptr;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[size] != '\0')
	{
		size++;
	}
	ptr = (char *) malloc((len + size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (LEN = 0; LEN <= (len + size); LEN++)
	{
		if (len > LEN)
			ptr[LEN] = s1[LEN];
		else
			ptr[LEN] = s2[LEN - len];
	}
	ptr[LEN] = '\0';
	return (ptr);
}
