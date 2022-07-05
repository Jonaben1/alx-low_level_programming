#ifndef PET
#define PET

/**
 * struct dog - a pet dog  with some information about it
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Some information include name, age and the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
