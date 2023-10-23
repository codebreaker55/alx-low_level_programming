#include "main.h"

/**
 * print_diagsums - function that prints the sum
 *	of the two diagonals of a square matrix of integers
 *
 * @a: is the name of the square matrix
 * @size: is the size of the square matrix
*/

void print_diagsums(int *a, int size)
{
	int var, sum1 = 0, sum2 = 0;

	for (var = 0; var < size; var++)
	{
		sum1 += a[var];
		sum2 += a[size - var - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
