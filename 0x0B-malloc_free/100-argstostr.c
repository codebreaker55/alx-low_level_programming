#include "main.h"

/**
 * *argstostr - function that concatenates all the arguments of your program
 *
 * @ac: is an integer
 * @av: is a pointer name
 *
 * Return: a pointer to a new string, or NULL if it fails
 *	NULL if ac == 0 or av == NULL
*/

char *argstostr(int ac, char **av)
{
	int len = 0, LEN = 0, i, arg = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (len < ac)
	{
		len++;
		LEN = LEN + strlen((av[len]) + 1);
	}
	LEN++;
	ptr = (char *) malloc((LEN + 1) * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (len = 0; len < ac; len++)
	{
		for (i = 0; av[len][i] != '\0'; i++, arg++)
		{
			ptr[arg] = av[len][i];
		}
		ptr[arg] = '\n';
		arg++;
	}
	ptr[arg] = '\0';
	return (ptr);
}
