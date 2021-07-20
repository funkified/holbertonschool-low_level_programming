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
typedef struct dog dog_t;

/* Prototypes Functions */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* Aux Function */

char *_strcpy(char *s);
int _strlen(char *s);
#endif
