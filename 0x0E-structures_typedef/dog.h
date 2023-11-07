#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>

/**
 * struct dog - a structure that holds a dog's name
 *          age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
*/


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
