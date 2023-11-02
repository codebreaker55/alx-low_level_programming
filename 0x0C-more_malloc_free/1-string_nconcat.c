#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: name of the first string
 * @s2: name of the second string
 * @n: is an unsigned int
 *
 * Return: if the function fails, it should return NULL
 *	a pointer to the allocated memory when success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(n + len1 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
