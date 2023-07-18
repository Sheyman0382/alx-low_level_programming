#include "dog.h"

/**
 * init_dog - a function that initialises the information
 * of a dog
 * @d: the memory address to a struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
