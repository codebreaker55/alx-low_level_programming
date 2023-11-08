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
	int output;
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	output = get_op_func(argv[2])(i, j);

	printf("%d\n", output);
	return (0);
}
