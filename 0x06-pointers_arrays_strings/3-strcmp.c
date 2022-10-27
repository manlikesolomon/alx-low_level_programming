#include <stdio.h>
/**
 * _strcmp - compares strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: integer value of difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
