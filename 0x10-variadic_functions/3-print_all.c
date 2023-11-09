#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 * @...: are the parameters of the function
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list all;
	int num = 0;
	char *ptr, *str = "";

	va_start(all, format);

	if (format)
	{
		while (format[num] != '\0')
		{
			switch (format[num])
			{
				case 'c':
					printf("%s%c", str, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(all, double));
					break;
				case 's':
					ptr = va_arg(all, char *);
					if (ptr == NULL)
					{
						ptr = "(nil)";
					}
					printf("%s%s", str, ptr);
					break;
				default:
					num++;
					continue;
			}
			str = ", ";
			num++;
		}
	}
	printf("\n");
	va_end(all);
}
