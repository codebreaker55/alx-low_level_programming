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

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
			(str[i] == ' ' || str[i] == '\t' ||
			 str[i] == '\n' || str[i] == ',' ||
			 str[i] == ';' || str[i] == '.' ||
			 str[i] == '!' || str[i] == '?' ||
			 str[i] == '"' || str[i] == '(' ||
			 str[i] == ')' || str[i] == '{' ||
			 str[i] == '}')
		{
			;
		}
		i++;
	}
	return (str);
}
