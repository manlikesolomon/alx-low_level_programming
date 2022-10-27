#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @src: string to append to dest
 * @dest: destination of append
 * Return: returns appended string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
