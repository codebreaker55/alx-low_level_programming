#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: is the name of string that will be reversed
*/

void rev_string(char *s)
{
	int len, i;
	char tmp;

	for (len = 0; s[len] != '\0'; ++len)
		;

	for (i = 0; i < len / 2; i++) /*looping to half the string for swapping*/
	{
		tmp = s[i];
		s[i] = s[len - 1 - i]; /*use -1 to make the array start from 0*/
		s[len - 1 - i] = tmp;
	}
}
