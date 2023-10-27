#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: is an integer
 * @argv: is an array of pointers to the strings
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
