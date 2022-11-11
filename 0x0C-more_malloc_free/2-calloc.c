#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - dynamic memory allocation for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer xto the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	for (unsigned int j = 0; j < (nmemb * size); j++)
		array[j] = 0;

	return (array);
}
