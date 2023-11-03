#include "main.h"

/**
 * _puts - is used to print a string, followed by a new line
 *
 * @ptr: is a pointer name
 *
 * Return: nothing
*/

void _puts(const char *ptr)
{
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
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

	for (num1 = 0; !(str[num1] >= '0' && str[num1] <= '9'); num1++)
	{
		if (str[num1] == '-')
		{
			sig = sig * -1;
		}
		else if (str[num1] != '+' && str[num1] != '\0')
		{
			_puts("Error");
			exit(98);
		}
	}
	for (i = num1; str[i] >= '0' && str[i] <= '9'; i++)
	{
		rsp = rsp * 10;
		rsp = rsp + (str[i] - '0');
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
		_putchar('0' + rsp);
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
	int i, j;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_puts("Error");
				exit(98);
			}
		}
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
