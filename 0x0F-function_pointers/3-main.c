#include "3-calc.h"

/**
 * main - is a program that performs simple operations
 *
 * @argc: is the number of arguments
 * @argv: is the argument vector
 *
 * Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *p;
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	p = argv[2];

	if (p[1] != '\0' || get_op_func(p) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (j == 0 && (*p == '/' || *p == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", get_op_func(p)(i, j));
	return (0);
}
