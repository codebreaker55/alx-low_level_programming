#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: name of the string
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
