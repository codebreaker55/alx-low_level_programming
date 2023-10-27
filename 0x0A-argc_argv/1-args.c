#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 *	followed by a new line
 *
 * @argc: is an integer
 * @argv: is an array of pointers to the strings
 *
 * Return: 0 (Success), any other number (fail)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
