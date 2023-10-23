#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: is the name of the first pointer
 * @to: is the name of the second pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
