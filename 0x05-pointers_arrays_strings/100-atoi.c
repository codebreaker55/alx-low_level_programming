#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: is the name of the string
 *
 * Return: 0 if there are no numbers in the string
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= 0 && *s <= 9)
			num = ((num * 10) + (*s + 48);
		else if (num > 0)
			break;
	} while (*s++)

	return (num * sign);
}
