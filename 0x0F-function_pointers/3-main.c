#include "3-calc.h"

/**
 * main - is a program that performs simple operations
 *
 * @argc: is the number of arguments
 * @argv: is the argument vector
 *
 * Return: always 0 (Success)
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int (*opr_fun)(int, int);
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	opr_fun = get_op_func(argv[2]);

	if (argv[2][1] != '\0' || opr_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (j == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", opr_fun(i, j));
	return (0);
}
