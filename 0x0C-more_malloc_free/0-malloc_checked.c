#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to dynamic memory
 * @b: size to be allocated
 * Return: pointer for success, 98 for fail
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
