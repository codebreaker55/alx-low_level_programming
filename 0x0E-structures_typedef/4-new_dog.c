#include "dog.h"
#include <stdlib.h>

/**
 * str_len - function used to get the length of the string
 *
 * @str: is the name of the string
 *
 * Return: the length of the string
*/

int str_len(const char *str)
{
	int len;

	for (len = 0; *str++; len++)
		;

	return (len);
}

/**
 * _strcpy - function that return a string with a copy of another one
 *
 * @sor: is the string that will be copied
 * @loc: is the string that will store the copy
 *
 * Return: the string after the copy is added
*/

char *_strcpy(char *loc, char *sor)
{
	int var;

	for (var = 0; sor[var]; var++)
	{
		loc[var] = sor[var];
	}
	loc[var] = '\0';
	return (loc);
}

/**
 * *new_dog - function that creates a new dog
 *
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the dog owner
 *
 * Return: NULL if the function fails
 *	return the struct pointer on success
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	if (!name || age < 0 || !owner)
		return (NULL);

	dogy = (dog_t *) malloc(sizeof(dog_t));

	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (str_len(name) + 1));

	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (str_len(owner) + 1));

	if (dogy->owner == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}
	dogy->name = _strcpy(dogy->name, name);
	dogy->age = age;
	dogy->owner = _strcpy(dogy->owner, owner);
	return (dogy);
}
