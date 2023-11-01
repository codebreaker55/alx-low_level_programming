#include "main.h"

/**
 * wrdspr - used to count number of words
 *
 * @s: name of the string to be counted
 *
 * Return: an integer
*/

int wrdspr(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * **strtow - function that splits a string into words
 *
 * @str: is a name of a string
 *
 * Return: a pointer to an array of strings (words)
 *	NULL if str == NULL or str == ""
 *	If your function fails, it should return NULL
*/

char **strtow(char *str)
{
	int i, j, k, len, num = 0, count = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wrdspr(str);
	if (num == 0)
		return (NULL);
	ptr = (char **) malloc(num * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			for (j = 1; str[i + j] && str[i + j] != ' '; j++)
				;
			j++;
			ptr[count] = (char *) malloc(j * sizeof(char));
			j--;
			if (ptr[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(ptr[k]);
				free(ptr[num - 1]);
				free(ptr);
				return (NULL);
			}
			for (len = 0; len < j; len++)
				ptr[count][len] = str[i + len];
			ptr[count][len] = '\0';
			count++;
			i = i + j;
		}
		else
			i++;
	}
	return (ptr);
}
