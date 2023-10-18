#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	for (i = 0; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
