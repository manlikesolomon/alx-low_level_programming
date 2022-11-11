#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to dynamic memory
 * @b: size to be allocated
 * Return: pointer for success, 98 for fail
 */

void *malloc_checked(unsigned int b)
{
	void *allocMem = malloc(b);

	if (!allocMem)
	{
		exit(98);
	}

	return (allocMem);
}
