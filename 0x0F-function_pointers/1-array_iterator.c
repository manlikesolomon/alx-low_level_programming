#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates through an array an executes a function
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
