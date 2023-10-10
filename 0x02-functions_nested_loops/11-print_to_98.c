#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *	separated by a comma, followed by space
 *	Numbers should be printed in order
 *
 *@n: input
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
