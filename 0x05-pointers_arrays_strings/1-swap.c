#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: is first pointer name
 * @b: is second pointer name
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
