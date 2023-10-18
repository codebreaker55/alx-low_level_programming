#include "main.h"

/**
 * isLower - determines if ascii is  lowercase
 *
 * @c: character
 *
 * Return: if true return 1, if false return 0
*/

int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * isDelimiter - determines if ascii is a delimiter
 *
 * @c: character
 *
 * Return: if true return 1, if false return 0
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n, . ! ?\ " () {} ";

	for (i =0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	else
		return (0);
}

/**
*cap_string - function that capitalizes all words of a string
*@str: input string
*Return: the string with capitalized characters
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int Delimit = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			Delimit = 1;
		else if (isLower(*str) && Delimit)
		{
			*str -= 32;
			Delimit = 0;
		}
		else
			Delimit = 0;
		str++;
	}
	return (ptr);
}
