#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes the dog structure
 * @init_dog: ...
 * @d: dog structure
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
