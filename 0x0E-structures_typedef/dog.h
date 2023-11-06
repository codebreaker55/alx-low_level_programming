#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a struct for a dog
 *
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the dog owner
 *
 * Description: a long dog struct for all the dog info.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
