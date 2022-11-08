#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3, *empty;
	int i, j, len1, len2;

	empty = "";

	if (s1 == NULL)
	{
		s1 = empty;
	}
	if (s2 == NULL)
	{
		s2 = empty;
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;

	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	i = j = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
