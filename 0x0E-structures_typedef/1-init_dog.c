#include "dog.h"

/**
 * init_dog - a function that initiate a variable of type struct dog
 * @d: character being used
 * @name: parameter being used
 * @age: parameter being used
 * @owner: parameter being used
 * Return: Always O success
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age  = age;
	d->owner = owner;
}

