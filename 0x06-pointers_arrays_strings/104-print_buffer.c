#include "main.h"

/**
 * print_buffer -  function that prints a buffer
 *
 * @b: the name of the string
 * @size: is the size of the string
 *
 * Return: nothing
*/

void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + i + k));
			else
				printf("  ");

			if (i % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int ch = *(b + i + k);

			if (ch < 32 || ch > 132)
			{
				ch = '.';
			}
			printf("%c", ch);
		}
		printf("\n");
		i += 10;
	}
}
