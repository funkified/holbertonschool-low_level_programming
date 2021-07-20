#include "dog.h"

/**
 * new_dog - creates a new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = _strcpy(name);
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	my_dog->owner = _strcpy(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
/**
 * _strlen - count the lenght of a string
 * @s: string to be measure
 * Return: lenght
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * _strcpy - copies a string
 * @s: string
 * Return: copy of the string
 */

char *_strcpy(char *s)
{
	int i;
	int len = _strlen(s);
	char *scopy = malloc(len);

	if (scopy == NULL)
	{
		free(scopy);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		scopy[i] = s[i];
	}
	return (scopy);
}
