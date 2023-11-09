#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: are the parameters of the function
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list prn;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(prn, n);

	if (separator != NULL)
	{
		for (num = 0; num < n; num++)
		{
			printf("%d%s", va_arg(prn, int),
					num  ? (separator ? separator : "") : "\n");
		}
	}
	va_end(prn);
}
