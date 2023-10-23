#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: is the name of the first string
 * @needle: is the name of the second string
 *
 * Return: a pointer to the beginning of the located substring
 *	or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (needle[j + 1] == '\0')
				return (haystack);
		}
		i++;
	}
	return ('\0');
}
