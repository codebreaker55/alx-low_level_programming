#inlude "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 *	 and updates the value it points to to 98
 *
 * @n: is the pointer name
 *
 * Return: always 0 (Success)
*/

void reset_to_98(int *n)
{
	int a = 10;

	n = &a;

	*n = 98;

	return (0);
}
