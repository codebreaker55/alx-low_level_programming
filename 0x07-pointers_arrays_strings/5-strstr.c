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
		for (j = i; haystack[j] != '\0' && needle[j - i] != '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
			if (needle[j - i] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
