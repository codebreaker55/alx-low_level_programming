#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: is the name of the first string
 * @s2: is the name of the second string
 *
 * Return: the result of the compare
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
	}

	return (result);
}
