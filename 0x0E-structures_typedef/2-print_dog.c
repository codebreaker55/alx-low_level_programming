#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: is a pointer for the struct for dog
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
