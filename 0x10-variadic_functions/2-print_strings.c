#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: are the parameters to be printed
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int num;
	char *ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(str, n);

	for (num = 1; num <= n; num++)
	{
		ptr = va_arg(str, char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", ptr);
		if (separator != NULL && num < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
