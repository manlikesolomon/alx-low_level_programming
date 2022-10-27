#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string to be concatenated
 * @src: string to be cantatenated
 * @n: number of strings to be copied
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
