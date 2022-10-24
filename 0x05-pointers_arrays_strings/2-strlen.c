#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string from a pointer
 * @s: pointer of type char
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0, sum = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[i++];
	}
	return (sum);
}
