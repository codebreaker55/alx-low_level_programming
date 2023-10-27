#include "main.h"

/**
 * main - program that multiplies two numbers
 *
 * @argc: is an integer
 * @argv: an array of pointers to the strings
 *
 * Return: 0 (Success); 1 (fail)
*/

int main(int argc, char const *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
