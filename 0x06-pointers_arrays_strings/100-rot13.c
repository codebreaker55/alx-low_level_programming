#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *
 * @str: is the name of the string
 *
 * Return: a pointer to string after it get encode
*/

char *rot13(char *str)
{
	char *ptr = str;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == input[i])
			{
				*str = output[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
