#include "main.h"

/**
 * *infinite_add - function that adds two numbers
 *
 * @n1: is the name of the first string
 * @n2: is the name of the second string
 * @r: is the buffer where the result will be stored
 * @size_r: is the buffer size
 *
 * Return: 0 If the result can not be stored in r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, lar = 0, a, b, q = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		lar = i;
	else
		lar = j;
	if (lar + 1 > size_r)
		return (0);
	r[lar] = '\0';
	for (k = lar - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - 48;
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - 48;
		else
			b = 0;
		r[k] = ((a + b + q) % 10) + 48;
		q = (a + b + q) / 10;
	}
	if (q == 1)
	{
		r[lar + 1] = '\0';
		if (lar + 2 > size_r)
			return (0);
		while (lar-- >= 0)
			r[lar + 1] = r[lar];
		r[0] = q + 48;
	}
	return (r);
}
