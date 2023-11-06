#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: is the variable to be initialized
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner of the dog
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '0')
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
