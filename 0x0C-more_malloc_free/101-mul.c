#include "main.h"

/**
 * _puts - is used to print a string, followed by a new line
 *
 * @ptr: is a pointer name
 *
 * Return: nothing
*/

void _puts(char *ptr)
{
	int len;

	for (len = 0; ptr[len]; len++)
	{
		_putchar(ptr[len]);
	}
}

/**
 * _atoi - is used to convert a string into an integer
 *
 * @str: string name
 *
 * Return: an integer
*/

int _atoi(const char *str)
{
	int sig = 1;
	unsigned long int rsp = 0, i, num1;

	for (num1 = 0; !(str[num1] >= 48 && str[num1] <= 57); num1++)
	{
		if (str[num1] == '-')
		{
			sig = sig * -1;
		}
	}
	for (i = num1; str[i] >= 48 && str[i] <= 57; i++)
	{
		rsp = rsp * 10;
		rsp = rsp + (str[i] - 48);
	}
	return (sig * rsp);
}

/**
 * print_int - fuctionn used to prinnt integer
 *
 * @num: is an integer
 *
 * Return: always 0
*/

void print_int(unsigned long int num)
{
	unsigned long int i = 0, rsp, div = 1;

	while (num / div > 9)
	{
		i++;
		div = div * 10;
	}
	for (; div >= 1; num %= div, div /= 10)
	{
		rsp = num / div;
		_putchar(48 + rsp);
	}
}

/**
 * main - used to print the result of multiplication
 *	followed by a new line
 *
 * @argc: is an integer
 * @argv: is a pointer to a string
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
