#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: is a string name
 * @f: is a pointer to the print_name function
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		(*f)(name);
	}
}
