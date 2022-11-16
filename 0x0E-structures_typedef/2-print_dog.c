#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer to struct
 * Return: true
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
