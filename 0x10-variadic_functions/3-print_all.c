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
	int i;
	char c;
	float f;
	char *s;

	va_start(all, format);

	while (format[num] != '\0')
	{
		switch (format[num])
		{
			case 'c':
				c = (char)va_arg(all, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(all, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(all, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				if (s != NULL)
				{
					printf("%s", s);
				}
				break;
		}
		num++;
	}
	printf("\n");
	va_end(all);
}
