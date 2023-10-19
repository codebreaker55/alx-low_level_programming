#include "main.h"

/**
 * *leet - Write a function that encodes a string into 1337
 *
 * @str: is the name of the string
 *
 * Return: a pointer to str string
*/

char *leet(char *str)
{
	char *ptr = str;
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {'4', '3', '0', '7', '1'};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(ch) / sizeof(char); i++)
		{
			if (*str == ch[i] || *str == ch[i] - 32)
			{
				*str = num[i] + 48;
			}
		}
		str++;
	}
	return (ptr);
}
