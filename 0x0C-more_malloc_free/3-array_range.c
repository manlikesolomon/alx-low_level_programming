#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of numbers
 * @min: min value in array
 * @max: max value in array
 * Return: pointer to array or NULL for failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1;

	if (min > max)
		return (NULL);
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (int i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
