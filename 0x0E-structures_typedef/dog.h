#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a pet dog  with some information about it
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: Some information include name, age and the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
