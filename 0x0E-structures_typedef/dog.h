#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new structure dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: true
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
