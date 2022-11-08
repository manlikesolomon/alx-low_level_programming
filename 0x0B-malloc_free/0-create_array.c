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
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr = (char *)malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
