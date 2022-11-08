#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to start from
 * Return: char type c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
