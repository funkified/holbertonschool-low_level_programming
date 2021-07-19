#include "dog.h"

/**
 * init_dog - initialize a variable of type struc dog
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;

}
