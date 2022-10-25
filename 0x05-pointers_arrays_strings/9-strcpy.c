#include <stdio.h>
#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src, including the terminating
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	return (dest);
}
