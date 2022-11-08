#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a string
 * @str: string
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len++;

	ptr = malloc(sizeof(str));

	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
