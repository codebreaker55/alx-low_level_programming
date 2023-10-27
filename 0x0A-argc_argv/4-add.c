#include "main.h"

/**
 * main - program that adds positive numbers
 *
 * @argc: is an integer
 * @argv: is an array of pointers to the strings
 *
 * Return: 0 (Success), 1 If one of the number
 *	contains symbols that are not digits
*/
int main(int argc, char *argv[])
{
	char *str;
	int tot = 0;

	while (--argc)
	{
		for (str = argv[argc]; *str; str++)
		{
			if (*str < 48 || *str > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		tot = tot + atoi(argv[argc]);
	}
	printf("%d\n", tot);
	return (0);
}
