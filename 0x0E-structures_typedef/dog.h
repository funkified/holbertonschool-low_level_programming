#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct with floowing element
 * @name: name of the dog
 * @owner: name of the dog owner
 * @age: age of the dog
 *
 * Description: long description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/* Prototypes Functions */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
