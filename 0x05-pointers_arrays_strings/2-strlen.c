#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string from a pointer
 * @s: pointer of type char
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + 1))
		i++;
	return (i);
}
