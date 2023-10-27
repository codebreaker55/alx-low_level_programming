#include "main.h"

/**
 * main - program that prints all arguments it receives
 *
 * @argc: is an integer
 * @argv: is an array of pointers to the strings
 *
 * Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; argc--; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
