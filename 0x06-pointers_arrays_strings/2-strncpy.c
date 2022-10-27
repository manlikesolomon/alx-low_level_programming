#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: max size of string to be copied
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest += '\0';

	return (dest);
}
