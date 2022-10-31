#include "main.h"
/**
 * _memcpy - copies values from one array to another
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i  < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
