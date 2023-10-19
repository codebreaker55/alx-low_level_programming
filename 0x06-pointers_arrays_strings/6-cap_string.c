#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: is the naame of the string
 *
 * Return: the pointer to the changed string
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')

			i++;

		if (str[i] == ' ' || str[i] == '\t' ||
		    str[i] == '\n' || str[i] == ',' ||
		    str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' ||
		    str[i] == '"' || str[i] == '(' ||
		    str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
